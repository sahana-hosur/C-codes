#include<stdio.h>
void linear_sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[100];
    printf("Enter the elemnts of the array");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("array before sorting\n");
     for(i=0;i<n;i++)
      printf("%d ",a[i]);
    linear_sort(a,n);
     printf("\narray after sorting\n");
     for(i=0;i<n;i++)
      printf("%d ",a[i]);
return 0;
}