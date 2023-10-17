#include<stdio.h>
int main(){
      int a[10], n, i,sum=0,j;
    printf("enter the size");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   for ( i = 0; i < n; i++)
   {
    for(j=i+1;j<n;j++)
  {  if (a[i]>a[j])
    {
        sum=a[i];
        a[i]=a[j];
        a[j]=sum;
    }
  } 
   }
   printf("The array arraged in assending order is");
   for(i=0;i<n;i++){printf("%d ",a[i]);}
return 0;
}