#include<stdio.h>
int binary_search(int *a,int key,int low,int high)
{   
  int mid;
  while(low<=high)
  {
    mid=low+(high-low)/2;
    if(a[mid]==key)
      return mid;
    else if(a[mid]<key)
      low=mid+1;
    else
     high=mid-1;
  }
  return -1;
}
void bubble_sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
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
    bubble_sort(arr,n);
    flag=binary_search(arr,key,0,n-1);
    if(flag!=-1)
     printf("After sorting\nElement found at %d index",flag);
    else 
     printf("Unsuccessfull search");
    
return 0;
}