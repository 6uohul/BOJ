/*
[백준 1927번] 최소 힙
문제 내용:
    최소 힙을 이용하여 다음과 같은 연산을 지원하는 프로그램을 작성하자.

    배열에 자연수 x를 넣는다.
    배열에서 가장 작은 값을 출력하고, 그 값을 배열에서 제거한다.
    프로그램은 처음에 비어있는 배열에서 시작하게 된다.
*/

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            if (pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }
}