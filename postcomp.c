#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define size 30
typedef struct{
    int top,stk[size];
}stack;
void push(stack *s,int ele)
{
    s->stk[++(s->top)]=ele;
}
int pop(stack *s)
{
    return (s->stk[(s->top)--]);
}
int evalvate(int op1,char opt,int op2)
{
    switch(opt)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':return pow(op1,op2);
    }
}
int main()
{
    int i=0,op1,op2,res;
    char ch,postfix[size];
    stack s;
    s.top=-1;
    printf("Enter the valid postfix expression ");
    scanf("%s",postfix);
    while(postfix[i]!='\0')
    {
        ch=postfix[i++];
        if(isdigit(ch))
          push(&s,ch-'0');
        else
        {
            op2=pop(&s);
            op1=pop(&s);
            res=evalvate(op1,ch,op2);
            push(&s,res);
        }
        
    }
    printf("RESULT is %d",pop(&s));
    return 0;
}