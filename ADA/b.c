#include<stdio.h>
#include<stdbool.h>
bool bfs(int g[][10],int strat_index,bool vistied[],int n){
    int queue[n];
    int f=-1,r=-1;
    queue[++r]=strat_index;
    vistied[strat_index]=true;
    while(f!=r){
        int cur=queue[++f];
        printf("%d ",cur+1);
        for(i=0;i<n;i++){
            if(g[cur][i]==1){
                if(!vistied[i]){
                    queue[++r]=i;
                    vistied[i]=true;
                }
                else{
                    return true;
                }
            }
        }
    }
    return false;
}
