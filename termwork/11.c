#include<stdio.h>
int gcd(int n1,int n2)
{
    int min,i;
    min=(n1>=n2)?n2:n1;
    for(i=min;i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
         {
            return i;
         }
    }
}
int main(){
    int n1,n2;
    printf("Enter the 2 elements :");
    scanf("%d %d",&n1,&n2);
    printf("gcd=%d\nlcm=%d\n",gcd(n1,n2),(n1*n2/gcd(n1,n2)));
return 0;
}