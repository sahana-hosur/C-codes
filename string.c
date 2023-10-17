// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string sf="Darshan R Biradar";
//     std::string::iterator iter;
//     std::string::reverse_iterator iter1;
//     cout << "Using forward iterators : ";
//     for (iter=sf.begin(); iter!=sf.end(); iter++)
//     cout << *iter;
//     cout << endl;
//     cout << "Using reverse iterators : ";

// for (iter1=sf.rbegin(); iter1!=sf.rend(); iter1++)

// cout << *iter1;

// cout << endl;
// return 0;
// }
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i, n;
    float x, sum, t;
    
     
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
     
    printf(" The value of Sin(%f) = %.4f",x,sum);
    return 0;
}