#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define infi 999999
int minKey(int g[][10],bool mst[],int n){
    int min=infi,min_index;
    for (int i=0;i<n;i++){
        if(!mst[i] && key[i]<min){
            min=key[i];
            min_index=i;
        }
    }
    return min_index;
}
void print(int g[][10],int p[],int n){
    for(int i=0;i<n;i++)
       printf("%d -  %d : %d\n",p[i],i,g[i][p[i]]);
}
void primMst(int g[][10],int n){
    int p[n],key[n];
    bool mst[n];
    for (int i=0;i<n;i++){
        mst[i]=false;
        key[i]=infi;
    }
    k[0]=0;
    p[0]=-1;
    for(count=0;count<n-1;count++){
        int u=minKey(key,mst,n);
        mst[u]=false;
        for(int v=0;v<n;v++){
            if(g[u][v] && !mst[v] && g[u][v]<key[v]){
                p[v]=u;
                key[v]=g[u][v];
            }
        }
    }
    print(g,p,n);
}
int main(){
    
return 0;
}