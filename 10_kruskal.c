#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

int parent[MAX];
int edges[MAX][3];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

bool union_set(int x, int y) {
    int x_root = find(x);
    int y_root = find(y);

    if (x_root == y_root) return false;
    parent[x_root] = y_root;
    return true;
}

void kruskal(int n, int m) {
    int i, j;
    int x, y;
    int cost, minimum_cost = 0;

    for (i = 0; i < n; i++) {
        parent[i] = i;
    }

    i = 0;
    while (i < m) {
        x = edges[i][0];
        y = edges[i][1];
        cost = edges[i][2];

        if (union_set(x, y)) {
            minimum_cost += cost;
            printf("%d - %d: %d\n", x, y, cost);
        }
        i++;
    }
    printf("Minimum cost: %d\n", minimum_cost);
}

int main(void) {
    int n, m;
    int i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &m);

    printf("Enter edges (x, y, weight):\n");
    for (i = 0; i < m; i++) {
        scanf("%d%d%d", &edges[i][0], &edges[i][1], &edges[i][2]);
    }

    kruskal(n, m);
    return 0;
}