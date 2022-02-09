#include <cstdio>
#include <queue>
#define MAX 1001

using namespace std;

int Graph[MAX][MAX] = {0, };
bool visited[MAX] = { false };

void DFS(int start, int V);

int main(){
    int n, m ,v; // 정점의 개수, 간선의 개수, 탐색 시작번호
    scanf("%d %d %d", &n, &m, &v);

    for(int i  = 0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        Graph[a][b] = Graph[b][a] = 1;
    }

    DFS(v, n);
    for(int i = 0; i <= n; i++)
        visited[i] = false;
}

void DFS(int start, int V){
    visited[start] = true;
    printf("%d", start);

    for(int i = 1; i<= V; i++){
        if(visited[i] || Graph[start][i] == 0)
            continue;
        DFS(i, V);
    }
}
