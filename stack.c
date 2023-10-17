#include<stdio.h>
#include<stdlib.h>
#define size 4
int s[size],top=-1;
void push()
{
    int x;
    if(top == size -1)
    {
        printf("\n overflow occured\n");
        return;
    }
    printf("Enter the element to insert");
    scanf("%d",&x);
    s[++top]=x;
}
void pop()
{
    if(top == -1)
    {
        printf("\n Underflow occured\n");
        return;
    }
    printf("Element poped %d",s[top]);
    top--;
}
void display()
{
    if(top ==-1)
    {
        printf("\n Under flow occured\n");
        return;
    }
    printf("The contents in stack are\n");
    for(int i=0;i<=top;i++)
      printf("%d ",s[i]);
    printf("\n");
}
int main()
{
    int c;
    while(1)
    {
        printf("\n1 for push\n2 for pop\n3 for display\n4 for exit\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:push();
                break;
        case 2:pop();
                break;
        case 3:display();
                break;
        case 4: exit(0);
        default: printf("Invalid choice");
                break;
        }
    }
    return 0;
}