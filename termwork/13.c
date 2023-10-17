#include<stdio.h>
void transpose(int a[][10],int t[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }
}
int main(){
    int ar[10][10],t[10][10],m,n;
    printf("Enter the rows and columns of matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    transpose(ar,t,m,n);
    printf("The entered matrix is \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    
return 0;
}