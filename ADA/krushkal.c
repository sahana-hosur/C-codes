#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define inf 99999
#define V 100
int compEdge(const void* a,const void *b){
    return ((int*)a)[2] - ((int*)b)[2];
}
int find(int p[],int i){
    if(p[i]==-1){
        return i;
    }
    return find(p,p[i]);
}
void Union(int p[],int x,int y){
    int xset=find(p,x);
    int yset=find(p,y);
    p[xset]=yset;
}
void kruskalMST(int n,int g[][n]){
    int i,j,E=0;
    int edges[V*V][3];
    for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(g[i][j]!=0){
                edges[E][0]=i;
                edges[E][1]=j;
                edges[E][2]=g[i][j];
                E++;
            }
        }
    }
    qsort(edges,E,sizeof(edges[0]),compEdge);
    int p[V];
    int v;
    for(v=0;v<V;v++)
        p[v]=-1;
    printf("Edges in the Minimum Spanning Tree:\n");
    for(i=0;i<E;i++){
        int x=find(p,edges[i][0]);
        int y=find(p,edges[i][1]);
        if(x!=y){
            Union(p,x,y);
                printf("%d - %d  :%d\n",edges[i][0],edges[i][1],edges[i][2]);
        }
    }
}
int main(){
    int n;
    printf("Enter the Number of vertices :");
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the connection from %d to %d (1 if connection else 0):",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    kruskalMST(n,a);
return 0;
}