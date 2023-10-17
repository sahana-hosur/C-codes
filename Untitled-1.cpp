#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the num";
    cin>>x>>y>>z;
    if(x<=y && x<=z)
     cout<<x<<"is smallest";
    else if(y<=x && y<=z)
     cout<<y<<"is smallest";
    else 
     cout<<z<<"is samllest";
    return 0;
}