#include<stdio.h>
int linear(int *a,int n,int *key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*key ==*(a+i))
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int n, a[10],s,key;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the elements");
      for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the key");
     scanf("%d",&key);
    s=linear(a,n,&key);
    if(s!=-1)
      printf("Element found at %d index",s);
    else 
      printf("Element not found ");
return 0;
}