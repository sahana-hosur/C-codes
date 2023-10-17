#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    if(argc!=3)
     {
        printf("Not possible");
        exit(0);
     }
    int n1,n2;
    n1=atoi(argv[1]);
    n2=atoi(argv[2]);
    printf("addition is %d ",(n1+n2));
    return 0;
}