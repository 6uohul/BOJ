/*
[백준 10845번] 큐
날짜 : 2022.07.17
문제 내용:
    정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

    push X: 정수 X를 큐에 넣는 연산
    pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력, 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
    size: 큐에 들어있는 정수의 개수를 출력
    empty: 큐가 비어있으면 1, 아니면 0을 출력
    front: 큐의 가장 앞에 있는 정수를 출력, 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
    back: 큐의 가장 뒤에 있는 정수를 출력, 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    int N; //명령의 수 N
    cin >> N;

    while (N--)
    {
        string n = "";
        cin >> n;

        if (n == "push")
        {
            int push_number;
            cin >> push_number;
            q.push(push_number);
        }

        else if (n == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop();
            }
            else
            {
                cout << "-1"
                     << "\n";
            }
        }

        else if (n == "size")
        {
            cout << q.size() << "\n";
        }

        else if (n == "empty")
        {
            if (!q.empty())
            {
                cout << "0"
                     << "\n";
            }
            else
                cout << "1"
                     << "\n";
        }

        else if (n == "front")
        {
            if (q.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
                cout << q.front() << "\n";
        }

        else if (n == "back")
        {
            if (q.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
                cout << q.back() << "\n";
        }
    }
}