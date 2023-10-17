// #include<stdio.h>
// int main(){
//       int a[10], n, i,sum=0;
//     printf("enter the size");
//     scanf("%d", &n);
//     printf("Enter the elements of array");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//    for ( i = 0; i < n; i++)
//    {
//     if (a[i]<a[i+1])
//     {
//         a[i+1]=a[i];
//         sum=a[i];
//     }
    
//    }
//    printf("%d",sum);
// return 0;
// }
#include<stdio.h>
int main()
{
    long int d,fact=1,sum=0,i,n;
    printf("E");
    scanf("%d",&n);
    for(int f=1;;f++)
    {
        i=f;
        sum=0;
     while (i > 0)
    {
        fact=1;
      d = i % 10;
      while (d > 0)
      {
        fact *= d;
        d--;
      }
      sum += fact;
      i /= 10;
    }
    if(sum==n)
    {
      printf("%d",f);
      break;
    }
    }
}