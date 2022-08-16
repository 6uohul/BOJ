/*
[백준 5639번] 이진 검색 트리
문제 내용:
    이진 검색 트리는 다음과 같은 세 가지 조건을 만족하는 이진 트리이다.

    1. 노드의 왼쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 작다.
    2. 노드의 오른쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 크다.
    3. 왼쪽, 오른쪽 서브트리도 이진 검색 트리이다.

    이진 검색 트리를 전위 순회한 결과가 주어졌을 때, 이 트리를 후위 순회한 결과를 구하는 프로그램을 작성하자
*/

#include <iostream>
#include <algorithm>

using namespace std;

int x;
int N = 0;
int preorder[10001];

void solve(int start, int end)
{
    int root = preorder[start];
    int idx = start + 1;

    if (start == end)
    {
        cout << root << '\n';
        return;
    }
    if (start > end)
    {
        return;
    }

    while (true)
    {
        if (idx > end || preorder[idx] > root)
            break;
        idx++;
    }

    solve(start + 1, idx - 1);
    solve(idx, end);
    cout << root << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> x)
    {
        if (x == -1)
            break;
        N++;
        preorder[N] = x;
    }

    solve(1, N);
}