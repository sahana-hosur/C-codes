#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[i]=a[i+l];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            a[k++]=L[i++];
        else
            a[k++]=R[j++];
    }
    while(i<n1)
        a[k++]=L[i++];

    while(j<n2)
        a[k++]=R[j++];
}
void merge_sort(int a[],int l,int r){

    if(l<r){
        int m=l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("Array after sorting\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
return 0;
}