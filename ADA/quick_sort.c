#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int l,int h){
    int pivot=a[h];

    int j,i=l-1;
    for(j=l;j<=h-1;j++){

        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void quick_sort(int a[],int l,int h){
    if(l<h){
        int pi=partition(a,l,h);

        quick_sort(a,l,pi-1);
        quick_sort(a,pi+1,h);
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
    quick_sort(a,0,n-1);
    printf("Array after sorting\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
return 0;
}