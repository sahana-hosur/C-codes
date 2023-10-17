#include<stdio.h>
int sum(int *a,int n)
{
    int i,su=0;
    for(i=0;i<n;i++)
     su+=a[i];
    return su;
}
int main(){
    int n,i,s=0;
    float avg;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The sum of the array =%d\naverage=%.2f\n",sum(a,n),(float)sum(a,n)/n);
    return 0;
}