#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}
int npr(int n,int r)
{
    return (fact(n)/fact(n-r));
}
int ncr(int n,int r)
{
    return(npr(n,r)/fact(r));
}
int main(){
    int n,r;
    printf("Enter the values of n and r:");
    scanf("%d %d",&n,&r);
    printf("npr=%d\n",npr(n,r));
    printf("ncr=%d\n",ncr(n,r));
    
return 0;
}