#include<stdio.h>
#include<stdlib.h>
#define max 20
int size;
typedef struct{
    int s[max];
    int top;
}stack;
void init_stk(stack *st)
{
    st->top=-1;
}
void push(stack *st,int num)
{
    if(st->top == size-1)
    {
        printf("\noverflow occured\n");
        return;
    }
    st->top++;
    st->s[st->top]=num;
}
void pop (stack *st)
{
    int num;
    if(st->top == -1)
    {
        printf("\nUnderflow occured\n");
        return;
    }
    printf("Element poped is %d\n",st->s[st->top]);
    st->top--;
}
void display(stack *st)
{
    int i;
    for(i=st->top;i>=0;i--)
      printf("\n%d",st->s[i]);
}
int main()
{
    int choice,num;
    stack ptr;
    init_stk(&ptr);
    printf("Enter the size of array");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1 for push\n2 for pop\n3 for display\n4 for exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number to add");
                    scanf("%d",&num);
                    push(&ptr,num);
                        break;
            case 2: pop(&ptr);
                        break;
            case 3: printf("\n Stack is \n");
                    display(&ptr);
                        break;
            case 4: exit(0);
            default:printf("Invalid choice");
        }
    }
    return 0;
}
