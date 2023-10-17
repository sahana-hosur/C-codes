#include<stdio.h>
int palindrome(int *org)
{
    int d,rev=0;
    int temp=*org;
    while(*org>0)
    {
        d=*org%10;
        rev=(rev*10)+d;
        *org/=10;

    }
    if(rev==temp)
       return 1;
    else 
      return -1;
}
int main(){
    int org,flag;
    printf("Enter the number");
    scanf("%d",&org);
    if(palindrome(&org)==1)
      printf("The number is palindrome");
    else
     printf("not a pla");
return 0;
}