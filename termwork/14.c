#include<stdio.h>
int principle(int a[][5],int m)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}
int secondary(int a[][5],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int a[5][5],n,m,psum,ssum;
    printf("Enter the rows and colums");
    scanf("%d %d",&m,&n);
    if(n!=m)
    {
        printf("Not a square matrix\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of principle diagonal is %d\n",principle(a,n));
    printf("The sum of the seconday diagonal is %d\n",secondary(a,n));

return 0;
}