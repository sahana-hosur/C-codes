//  #include<bits/stdc++.h>
//  using namespace std;

//  int main(){
//      int n1,n2;
//       cout<<"Enter the 2 numbers";
//       cin>>n1>>n2;
//       int max,gcd,lcm,i;
//       max=(n1<n2)?n1:n2;
//       for(i=max;i>0;i--)
//       {
//          if((n1%i==0)&&(n2%i==0))
//          {
//              gcd=i;
//              break;
//          }
//       }
//       lcm=(n1*n2)/gcd;
//       cout<<"gcd="<<gcd;
//       cout<<"lcm="<<lcm;

//  return 0;
//  }

//  #include<bits/stdc++.h>
//  using namespace std;

//  int main(){
//      int i;
//      float x,sum=1,t=1;
//      cout<<"Enter the degree";
//      cin>>x;
//      x=x*3.14159/180;
//      cout<<"enter the itterations";
//      int n;
//      cin>>n;
//      t=x;
//      sum=x;
//      for(i=1;i<=n;i++)
//      {
//        t=((t*(-1)*x*x)/(2*i*(2*i-1)));
//         sum+=t; 
//      }
//      cout<<"cos(x)"<<sum;
//     cout<<"cos="<<cos(x);
//  return 0;
//  }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num2,i,count=0,num1;
    printf("Enter the  range");
    scanf("%d %d",&num1,&num2);
    for(n=num1;n<=num2;n++)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
         {
            printf("%d \t",n);
         }
         count=0;
    }
return 0;
}