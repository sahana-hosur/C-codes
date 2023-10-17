#include<stdio.h>
int main(){
    int min,n1,n2,gcd,lcm,i;
    printf("Enetr the 2 numbers");
    scanf("%d %d",&n1,&n2);
    min=(n1>n2)?n2:n1;
    for(i=min;i>0;i--)
    {
        if((n1%i==0) &&(n2%i==0))
        {
            gcd=i;
            break;
        }
    }
    lcm=n1*n2/gcd;
    printf("%d is gcd\n %d is lcm",gcd,lcm);
return 0;
}