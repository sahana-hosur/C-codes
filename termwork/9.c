#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
         return -1;
    }
    return 1;
}
int main(){
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   if(prime(n)==1)
     printf("%d is prime\n",n);
    else
     printf("%d is not prime\n",n);
return 0;
}