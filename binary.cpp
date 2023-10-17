#include<bits/stdc++.h>
using namespace std;

int main(){
    int mid,high,low;
    int n,i,a[10]={56,56,78,25,62,5,6,42 ,53  ,61};
    int len=(sizeof(a)/sizeof(a[0]));
    sort(a,a+len);
    for(i=0;i<10;i++)
      cout<<" "<<a[i];
      cout<<"Enter the key element";
      cin>>n;
      mid=len/2;

      
      cout<<mid;
return 0;
}