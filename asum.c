#include<stdio.h>
int main(){
     int a[10], n, i,sum=0;
    printf("enter the size");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i <n; i++)
    {
        sum+=a[i];
    }
    printf("The sum of the array is %d",sum);
    
    return 0;
}