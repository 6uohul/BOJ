/*
[백준 11724번] 연견 요소의 개수
문제 내용:
    방향 없는 그래프의 연결 요소의 개수를 구하는 프로그램을 작성하자
    정점: N, 간선: M
    (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2)
*/

#include <iostream>
#include <vector>
using namespace std;

bool g[1001][1001];
bool visited[1001];
int N, M;

void DFS(int v)
{
    visited[v] = true;
    for (int i = 1; i <= N; i++) // 벡터 그 원소에 해당하는 크기만큼
    {
        if (g[v][i] == true && visited[i] == false)
        {
            DFS(i);
        }
    }
}

int main()
{
    int u, v;
    int cnt = 0;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        g[u][v] = g[v][u] = true;
    }

    for (int i = 1; i <= N; i++) //빠짐없이 탐색하기 위해
    {
        if (visited[i] == 0)
        {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << "\n";
}