#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define V 100
int comedges(const void* a, const void* b){
    return ((int*)a)[2] - ((int*)b)[2];
}
void find(int p[],int i){
    if(p[i]==-1){
        return i;
    }
    fint(p,p[i]);
}
void Union(int p[],int x,int y){
    int xset=find(p,x);
    int yset=find(p,y);
    p[xset]=yset;
}
void kur(int n,int g[][n]){
    int e=0;
    int edges[V*V][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            edges[e][0]=i;
            edges[e][1]=j;
            edges[e][2]=g[i][j];
            e++
        }
    }
    qsort(edges,E,sizeof(edges[0]),comedges);
    int p[V];
    for(int i=0;i<V;i++){
        p[i]=-1;
    }
    for(int v=0;v<E;v++){
        int x=find(p,edges[i][0]);
        int y=find(p,edges[i][1]);
        if(x!=y){
            Union(p,x,y);
            printf(" %d - %d : %d \n",edges[i][0],edges[i][1],edges[i][2]);
        }
    }
}
int main(){
    
return 0;
}