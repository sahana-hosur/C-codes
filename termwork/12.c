#include<stdio.h>
#include<stdlib.h>
int** mult_matrix(int a[][10],int b[][10],int m,int n,int r,int c)
{
    int mult[10][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<c;j++)
        {
            mult[i][j]=0;
            for(int k=0;k<n;k++)
            {
                mult[i][j]+=a[i][k]*b[k][j]; 
            }
        }
    }
    return mult;
}
int main(){
    int **ar;
    int a[10][10],b[10][10],m,n,r,c;
    printf("Enter the rows and columns of first matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the rows and columns of second matrix:");
    scanf("%d %d",&r,&c);
    if(n!=r)
    {
        printf("multiplication is not possible\n");
        return 0;
    }
    printf("Enter the elements of first matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    ar=malloc(m*(sizeof(int**)));
    for(int i=0;i<c;i++)
      ar[i]=malloc(c*sizeof(int*));
    ar=mult_matrix(a,b,m,n,r,c);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
return 0;
}