#include<sdtio.h>
#include<stdbool.h>
#include<stdlib.h>
void dfs(int g[][10],int vertex,int visited[],int n,bool *is_acycle){
    visited[vertex]=1;
    printf("%d ",vertex+1);
    for(int i=0;i<n;i++){
        if(g[vertex][i]==1){
            if(visited[i]==0){
                dfs(g,i,visited,&is_cycle);
            }
            else if(visited[i]==1){
                *is_cycle=false;
                return
            }
        }
    }
    visited[vertex]=2;
}
bool acycle(int n,int g[][n]){
    int visited[n]={0};
    bool is_acycle=true;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            dfs(g,i,visited,n,&is_acycle);
        }if(!is_acycle){
            return false;
        }
    }
    return true;
}