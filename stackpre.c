#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
#include<string.h>
# define MAX 100

typedef struct{
    int top;
    int maxsize;
    int* array;//storing in sting in interger array as its stores in ASCII values
}Stack;
Stack* create(int max)
{
    Stack* stack=(Stack*)malloc(sizeof(Stack));
    stack->maxsize = max;
    stack->top= -1;
    stack->array= (int*)malloc(stack->maxsize * sizeof(int));
    return stack;
}
int isfull(Stack* stack)
{
    if(stack->top == stack->maxsize -1)
      printf("Will not be able to push maxsize reached\n");
    return stack->top == stack->maxsize-1;
}
int empty(Stack *stcak)
{
    return stcak->top == -1;
}
void push(Stack* stack,char item)
{
    if(isfull(stack))
      return;
    stack->array[++stack->top] = item;
}
int pop(Stack* stcak)
{
    if(empty(stcak))
      return INT_MIN;
    return stcak->array[stcak->top--];
}
int peek(Stack* stack)
{
    if(empty(stack))
      return INT_MIN;
    return stack->array[stack->top];
}
int operand(char ch)
{
    return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}
int precedence(char ch)
{
    switch (ch)
    {
    
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}
int postfix(char* expression)
{
    int i,j;
    Stack* stack=create(strlen(expression));
    if(!stack)
      return -1;
    for(i=0,j=-1;expression[i];++i)
    {
        if(operand(expression[i]))
          expression[++j] = expression[i];
        else if(expression[i] == '(')
           push(stack,expression[i]);
        else if(expression[i] == ')')
           {
            while(!empty(stack) && peek(stack) != '(')
              expression[++j]=pop(stack);
            if(!empty(stack) && peek(stack) != '(')
               return -1; //invalid expression
            else
             pop(stack);
           }
        else  //if an operator
        {
            while(!empty(stack) && precedence(expression[i]) <= precedence(peek(stack)))
              expression[++j]=pop(stack);
            push(stack,expression);
        }
    }
    while(!empty(stack))
        expression[++j]==pop(stack);
    
    expression[++j]='\0';
}
void reverse(char *expr)
{
    int size=(strlen(expr));
    int j=size,i=0;
    char temp[size];
     
     temp[j--]='\0';
      while(expr!='\0')
      {
        temp[j]=expr[i];
        j--;
        i++;
      }
      strcpy(expr,temp);
}
void brackets(char *expr)
{
    int i=0;
    while(expr[i]!='\0')
    {
        if(expr[i]=='(')
         expr[i]=')';
        else if(expr[i]==')')
          expr[i]='(';
        i++;
    }
}
void infixtoprefix(char *exp)
{
    int size=strlen(exp);
    reverse(exp);
    brackets(exp);
    postfix(exp);
    reverse(exp);
}
int main()
{
    printf("The infix expression : ");
      char expression[MAX];
    scanf("%s",expression);
      infixtoprefix(expression);
    printf("The prefix expression : ");
    printf("%s\n",expression);
    return 0;
}