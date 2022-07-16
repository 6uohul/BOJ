/*
[백준 10773번] 제로
날짜 : 2020.07.16 (토)
문제 내용:
    첫 번째 줄에 정수 K가 주어진다. (1 ≤ K ≤ 100,000)
    이후 K개의 줄에 정수가 1개씩 주어진다.
    정수는 0에서 1,000,000 사이의 값을 가지며,
    정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.

    정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.
*/

#include <iostream>
#include <stack>

using namespace std;

int K;

int main()
{
    stack<int> money;
    cin >> K; // K개의 줄

    int sum = 0;

    for (int i = 0; i < K; i++)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            money.pop();
        }
        else
            money.push(input);
    }

    while (!money.empty())
    {
        sum += money.top();
        money.pop();
    }
    cout << sum;
}