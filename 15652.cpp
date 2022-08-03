/*
[백준 15652번] N과 M(4)
문제 내용:
    한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
    중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

    수열은 사전 순으로 증가하는 순서로 출력해야 한다.

    첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
*/

#include <iostream>

using namespace std;
#define MAX 9

int N, M;
int arr[MAX];

void dfs(int num, int k)
{
    if (k == M)
    { // M까지 들어갔을 경우
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else
    { // M까지 안 들어갔을 시
        for (int i = num; i <= N; i++)
        {
            arr[k] = i; // 값 저장
            dfs(i, k + 1);
        }
    }
}

int main()
{
    cin >> N >> M;
    dfs(1, 0);
}