/*
[백준 11297번] 최대 힙
문제 내용:
    최대 힙을 이용하여 다음과 같은 연산을 지원하는 프로그램을 작성하자.

    배열에 자연수 x를 넣는다.
    배열에서 가장 큰 값을 출력하고, 그 값을 배열에서 제거한다.
    프로그램은 처음에 비어있는 배열에서 시작하게 된다.
*/

#include <iostream>
#include <queue>

using namespace std;

int n;                  // 연산의 개수를 받아줄 변수
priority_queue<int> pq; // int형 우선순위 큐 선언

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    while (n--)
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