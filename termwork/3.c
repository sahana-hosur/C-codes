#include<stdio.h>
int linear_search(int *a,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
          return i;
    }
    return -1;

}
int main(){
    int n,i,key,flag;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    int arr[n];
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
    printf("Enter the element to find");
    scanf("%d",&key);
    flag=linear_search(arr,n,key);
    if(flag!=-1)
     printf("Element found at %d index",flag);
    else 
     printf("Unsuccessfull search");
    
return 0;
}