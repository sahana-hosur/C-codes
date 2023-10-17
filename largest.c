#include<stdio.h>
void bigger(int *a,int *b)
{
    if(*a>*b)
      printf("%d ",*a);
    else 
      printf("%d",*b);
}
int main(){
    int a,b;
    printf("Enter the 2 numbers");
    scanf("%d %d",&a,&b);
    
    printf("biggest number is ");
    bigger(&a,&b);
return 0;
}