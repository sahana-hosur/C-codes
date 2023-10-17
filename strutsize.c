#include<stdio.h>
struct st
{
    int a,b;
    char name[20];
    float c;
};

int main()
{
    struct st e;
    printf("size of stuctre is %d",sizeof(e));
    printf("\nsize of stuctre is %d",sizeof(struct st));
    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(double));
    printf("\n%d",sizeof(float));
return 0;
}
//write a code to copy string?  