/*
    [백준 20301번] 반전 요세푸스
    날짜 2022.07.18(월)
    문제 내용:
    기존의 요세푸스 문제에 M명의 사람이 제거될 때마다 원을 돌리는 방향을 계속해서 바꾼다
*/

#include <iostream>
#include <deque> //양 끝에서 push pop

using namespace std;

int main()
{
    int n, k, m; // n명의 사람, k번째 사람 우선 제거
    cin >> n >> k >> m;

    deque<int> deque;

    for (int i = 0; i < n; i++)
    {
        deque.push_back(i + 1);
    }

    int cnt = 0; // 사람이 제거될 때 ++
    bool check = true;

    while (!deque.empty())
    {
        if (check)
        { // 순방향일때
            for (int i = 0; i < k - 1; i++)
            {
                deque.push_back(deque.front());
                deque.pop_front();
            }
            cout << deque.front() << '\n';
            deque.pop_front();
        }
        else
        { // 역방향일때
            for (int i = 0; i < k - 1; i++)
            {
                deque.push_front(deque.back());
                deque.pop_back();
            }
            cout << deque.back() << '\n';
            deque.pop_back();
        }

        cnt++;

        if (cnt == m)
        { // 방향 전환
            check = !check;
            cnt = 0;
        }
    }
}