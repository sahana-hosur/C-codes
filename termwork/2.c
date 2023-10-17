#include<stdio.h>
int even(int *a,int n)
{
    int i,su=0;
    for(i=0;i<n;i++)
    {
     if(a[i]%2==0)
     {
        su+=a[i];
     }
    }
    return su;
}
int odd(int *a,int n)
{
    int i,su=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            su+=a[i];
        }
    }
    return su;
}
int main(){
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    int a[n];
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);   
    printf("The sum of even elements and odd elements are \neven=%d\nodd=%d\n",even(a,n),odd(a,n));
return 0;
}