#include <stdio.h>
#include <stdbool.h>
bool bfs(int a[][10], int start_vertex, bool visited[], int n) {
    int queue[n];
    int f = -1, r = -1;
    queue[++r] = start_vertex;
    visited[start_vertex] = true;
    while (f != r) {
        int cur = queue[++f];
        printf("%d ", cur + 1);
        for (int i = 0; i < n; i++) {
            if (a[cur][i] == 1) {
                if (!visited[i]) {
                    queue[++r] = i;
                    visited[i] = true;
                } else {
                    return true; 
                }
            }
        }
    }
    return false; // No cycle found
}
void initialize(bool a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = false;
    }
}
int main() {
    int n;
    printf("Enter the Number of vertices: ");
    scanf("%d", &n);
    int a[n][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the connection from %d to %d (1 if connection else 0): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nBFS Traversal: ");
    bool visited[n];
    initialize(visited, n);
    bool has_cycle = false;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            has_cycle = bfs(a, i, visited, n);
            if (has_cycle) {
                break;
            }
        }
    }
    if (has_cycle) {
        printf("\nThe graph has a cycle.\n");
    } else {
        printf("\nThe graph is acyclic.\n");
    }
    return 0;
}