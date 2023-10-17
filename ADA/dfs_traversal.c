#include <stdio.h>
#include <stdbool.h>
#define MAX_VERTICES 100
void dfs(int graph[MAX_VERTICES][MAX_VERTICES], int visited[MAX_VERTICES], int vertex, int num_vertices, bool* is_acyclic) {
    int i;
    visited[vertex] = 1;
    printf("%d ",vertex+1);
    for (i = 0; i < num_vertices; i++) {
        if (graph[vertex][i] == 1) {
            if (visited[i] == 0) {
                dfs(graph, visited, i, num_vertices, is_acyclic);
            } else if (visited[i] == 1) {
                *is_acyclic = false; 
                return;
            }
        }
    }
    visited[vertex] = 2;
}
bool isAcyclic(int graph[MAX_VERTICES][MAX_VERTICES], int num_vertices) {
    int visited[MAX_VERTICES] = {0};
    bool is_acyclic = true;
    int i; 
    for (i = 0; i < num_vertices; i++) {
        if (visited[i] == 0) {
            dfs(graph, visited, i, num_vertices, &is_acyclic);
            if (!is_acyclic) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int num_vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};
    printf("Enter the adjacency matrix for the graph:\n");
    int i, j; 
    for (i = 0; i < num_vertices; i++) {
        for (j = 0; j < num_vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    if (isAcyclic(graph, num_vertices)) {
        printf("The graph is acyclic.\n");
    } else {
        printf("The graph has a cycle.\n");
    }
    return 0;
}