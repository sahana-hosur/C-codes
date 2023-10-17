// // #include <stdio.h>

// // int main()
// // {
// //     int a, b;
// //     char c;
// //     printf("enter two num ");
// //     scanf("%d%d", &a, &b);
// //     printf("0pp ");
// //     scanf(" %c", &c);
// //     switch(c)
// //     {
// //         case '+': printf("sum is %d", a+b);
// //                 break;
// //         case '-': printf("sub is %d", a-b);
// //                 break;
// //         // default : printf("Invalid ");
// //     }
// //     if (c == 43)
// //     {
// //         printf("addition is %d", a + b);
// //     }
// //     // char c;
// //     // c='234';
// //     // int m=c;
// //     // printf("%d",m);

// //     return 0;
// // }
// #include<stdio.h>
// int main(){
//  long int count,i,n;
//  printf("enter the number");
//  scanf("%d",&n);
//  while(n>1)
//  {
//    count=1;
//   for(i=2;i<n;i++)
//   {
//     if(n%i==0)
//        {
//        count++;
//       break;}
//   }
//   if(count<=1)
//  {
//     printf("%d\t",n);}
//  n--;}
// printf("\n");
// return 0;
// }
/*
1. The first for loop is used to traverse through the array.
2. The second for loop is used to compare the current element with the next element.
3. If the current element is greater than the next element, then the current element is swapped with the next element.
4. The last printf statement prints the largest element in the array.
*/
#include<stdio.h>

int main(){
   int temp,a[5];
   a[5]= { 0,4,3,20,5,8};
   
 
   for(int i=0;i<5;i++)
   {
      if(a[i]>a[i+1])
      {
         temp=a[i];
         a[i+1]=a[i];
      }
   }
   printf("%d",temp);
return 0;
}
