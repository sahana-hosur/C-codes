#include<stdio.h>
void fibonacci(int n)
{
    long long  int n1=0,n2=1,n3;
    printf("The fibonacci series upto %d terms are\n%d %d ",n,n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}
int main(){
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    fibonacci(n);
return 0;
}