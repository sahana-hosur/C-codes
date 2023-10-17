// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,s=0;
//     cout<<"enter the number";
//     cin>>a;
//     while(a>0)
//     {
//         b=a%10;
//         s=s+b;
//         a=a/10;
//     }
//     cout<<"sum of digits"<<s;
// return 0
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={56,656,66,663,55,867,455,65,87,8888},i,j,lar=0,temp,g;
      
       for(i=0;i<10;i++)
        cout<<" "<<a[i] ;
       cout<<"\n";
      for(i=0;i<10;i++)
      {
        for( j=0;j<10-i;j++)
        {
            if(lar<=a[j])
            {
               lar=a[j];
               g=j;
            }
            
        }
        temp=a[10-i-1];
        a[10-i-1]=lar;
        a[g]=temp;
        lar=0;
      }
      for(i=0;i<10;i++)
        cout<<" "<<a[i] ;
return 0;
}