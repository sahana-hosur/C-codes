#include<stdio.h>
int main(){
    int count=0,n;
    printf("c");
    scanf("%d",&n);
    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0){
         count++;
    }
    }
    if(count<=1){printf("is a prime");}
    else{printf("nf") ;}
     printf("(f)");

return 0;
}