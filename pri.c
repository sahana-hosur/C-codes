#include<stdio.h>
int pri(int (*m)[10],int n)
{
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=*(*(m+i)+j);
            }
        }
    }
    return sum;
}
int main(){
    int m[10][10],n,i,j,p;
    printf("Enter the size");
     scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
    scanf("%d",&m[i][j]);
    }}
    p=pri(m,n);
    printf("%d",p);
return 0;
}