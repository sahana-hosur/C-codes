#include<stdio.h>
#include<stdbool.h>
#define inf 999999
int minKey(int key[],bool mstSet[],int n){
    int min=inf,min_index;
    for(int v=0;v<n;v++){
        if(!mstSet[v] && key[v] < min){
            min=key[v];
            min_index = v;
        }
    }
    return min_index;       
}
void printMST(int p[],int n,int g[][n]){
    printf("Edge weight\n");
    for(int i=1;i<n;i++){
        printf("%d - %d   %d \n",p[i],i,g[i][p[i]]);
    }
}
void primMST(int n,int g[][n]){
    int p[n];
    int key[n];
    bool mstSet[n];
    for(int i=0;i<n;i++){
        key[i]=inf; 
        mstSet[i]=false;
    }
    key[0]=0;
    p[0]=-1;
    for(int count=0;count<n-1;count++){
        int u=minKey(key,mstSet,n);
        mstSet[u]=true;
        for(int v=0;v<n;v++){
            if(g[u][v] && !mstSet[v] && g[u][v] < key[v]){
                p[v]=u;
                key[v]=g[u][v];
            }
        }
    }
    printMST(p,n,g);
}
int main(){
    int n;
    printf("Enter the Number of vertices :");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            printf("Enter the connection from %d to %d (1 if connection else 0):",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    primMST(n,a);
return 0;
}