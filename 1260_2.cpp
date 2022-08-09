/*
[백준 1260번] DFS와 BFS
문제 내용:
    그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오.
    단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다.
    정점 번호는 1번부터 N번까지이다.
*/

#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int n, m, v;
int visited[MAX] = {false};
int graph[MAX][MAX] = {
    0,
}; // graph[][] = 간선 ( 1이면 연결 )

// DFS 탐색
void DFS(int start, int s)
{
    visited[start] = true;
    cout << start << " ";

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == true || graph[start][i] == 0)
        {
            continue;
        }
        else
        {
            DFS(i, s);
        }
    }
}

void BFS(int start, int s)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int V = q.front();
        cout << V << " ";
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == true || graph[V][i] == 0)
                continue;
            q.push(i);
            visited[i] = true;
        }
    }
}

void clean()
{
    for (int i = 0; i <= n; i++)
    {
        visited[i] = false;
    }
}

int main()
{
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }

    DFS(v, n); // dfs 탐색
    clean();
    cout << "\n";

    BFS(v, n); // bfs 탐색
}