#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 30
typedef struct 
{
    char stk[size];
    int top;

}stack;
void push(stack *s,char ch)
{
    s->stk[++(s->top)]=ch;
}
char pop(stack *s)
{
    return (s->stk[(s->top)--]);
}
int precendence(char op)
{
    switch(op)
    {
        case '(': return 1;
        case '+':
        case '-':return 2;
        case '/':
        case '*':return 3;
    }
}
int main()
{
    stack s;
    s.top=-1;
    char c;
    int i=0,j=0;
    printf("Enter the valid infix expression ");
    char postfix[size],infix[size],ch;
    scanf("%s",infix);
    while(infix[i]!='\0')
    {
        ch=infix[i++];
        if(ch=='(')
          push(&s,ch);
        else if(isalpha(ch) || isdigit(ch))
          postfix[j++]=ch;
        else if(ch==')')
        {
            while((c=pop(&s))!='(')
            {
                postfix[j++]=c;
            }
        }
        else
        {
            while(precendence(ch)<=precendence(s.stk[s.top]) && s.top!=-1)
            {
                postfix[j++]=pop(&s);
            }
            push(&s,ch);
        }
    }
    while(s.top!=-1)
    {
        postfix[j++]=pop(&s);
    }
    postfix[j]='\0';
    printf("postfix expression is %s",postfix);
    return 0;
}
