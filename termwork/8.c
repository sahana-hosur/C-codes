#include<stdio.h>
int palindrome(int org)
{
    int n,rev=0,d;
    n=org;
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    if(rev==org)
      return 1;
    return -1;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(palindrome(n)==1)
      printf("%d is palindrome\n",n);
    else 
     printf("%d is not a palindrome\n",n);
return 0;
}