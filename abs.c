#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[]){
    int a,b;
    char op;
    int res;
    if(argc!= 4){
        printf("Invalid arguements");
        return 0;
    }
    op= *argv[2];
    a=atoi(argv[1]);
    b=atoi(argv[3]);
    if(op=='*'){
        res=a*b;
    }else if(op=='+'){
        res=a+b;
    }else if(op=='-'){
        res=a-b;
    }else{
        res=a/b;
    }
    printf("The result is %d\n",res);
    return 0;
}