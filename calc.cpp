#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    double b,c,d;
    cout<<"choose the function/operaton\n1 add\n2 sub\n3 div\n4 multiply \n5 for trignometric values \n6 for log of base 10\n7 for ln\n8 for log of any base\n9 for power\n10 for exponentital \n11 for inverse of number\n 12 for hyperbolic trignometric values ";
    cin>>a;
    if(a==1)
     {
         
         cout<<"enter the 2 numbers";
         cin>>b>>c;
         d=b+c;
         cout<<"sum="<<d;
     }
     else if(a==2)
     {
       cout<<"enter the 2 numbers";
       cin>>b>>c;
       d=b-c;
       cout<<"remain="<<d;  
     }
     else if(a==3)
     {
         cout<<"enter the 2 numbers";
         cin>>b>>c;
         d=b*c;
         cout<<"product="<<d;
     }
     else if(a==4)
     {
         cout<<"enter the numerator followed by demnominator";
         cin>>b>>c;
         d=b/c;
         cout<<"quotient="<<d;
     }
     else if(a==5)
     {
         int e,f,g;
         cout<<"choose the trignometric fuction\n1 for sine\n2 for cosine\n3 for tangent";
         cin>>e;
         cout<<"choose 1 for degree and 2 for radian";
         cin>>f;
         if(f==1)
         {
            
           cout<<"enter the angle (it is precise but not exact)";
           cin>>g;
           d=(g*3.1415926545)/180;
         }
         else if(f==2)
         {
             cout<<"enter the angle";
             cin>>d;
         }
         if(e==1)
         {
             b=sin(d);
             cout<<"="<<b;
         }
         else if(e==2)
         {
             b=cos(d);
             cout<<"="<<b;
         }
         else if(e==3)
         {
             b=tan(d);
             cout<<"="<<b;
         }
     }
     else if(a==6)
     {
       cout<<"enter the number";
       cin>>b;
       d=log10(b);
       cout<<"="<<d;
     }
     else if(a==7)
     {
         cout<<"enter the number";
         cin>>b;
         d=log(b);
         cout<<"="<<d;
     }
     else if(a==8)
     {
         cout<<"enter the number followed by base";
         cin>>b>>c;
         d=(log(b))/(log(c));
         cout<<"="<<d;
        
     }
     else if(a==9)
     {
         cout<<"enter the base followed by power";
         cin>>b>>c;
         d=pow(b,c);
         cout<<"="<<d;
     }
     else if(a==10)
     {
         cout<<"enter the power of e";
         cin>>b;
         d=pow(2.71828182845,b);
         cout<<"="<<d;
     }
     else if(a==11)
     {
         cout<<"enter the number";
         cin>>b;
         d=1/b;
         cout<<"inverse="<<d;
     }
     else if(a==12)
     {
         printf("choose the function \n 1 for sinh\n2 for cosh \n3 for tanh ");
         cin>>c;
         int g;
         cout<<"choose the unit of anlge \n 1 for degrees \n 2 for radians  ";
         cin>>g;
         if(g==1)
         {
             cout<<"enter the angle";
             cin>>b;
             d=(3.1415926545*b)/180;
         }
         else if(g==2)
         {
             cout<<"enter the angle";
             cin>>d;
         }
         if(c==1)
         {
             cout<<"="<<sinh(d);
         }
         else if(c==2)
         {
             cout<<"="<<cosh(d);
         }
         else if(c==3)
         {
             cout<<"="<<tanh(d);
         }
     }
     
    return 0; 

}