/*
[백준 18115번] 카드 놓기
문제 내용:

    1. 제일 위의 카드 내려놓기
    2. 위에서 두번째 카드(카드가 2장 이상인 경우)
    3. 제일 밑에 있는 카드(카드가 2장 이상인 경우)

    위의 세가지 기술을 N장의 카드에서 N번 사용해 내려놓았더니 1,2,...,N
    처음 카드의 배치를 출력하는 프로그램을 작성하자.
*/

#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

using namespace std;

int N, x;
deque<int> A;
vector<int> input;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        input.push_back(x);
    }

    reverse(input.begin(), input.end());

    for (int i = 1; i <= N; i++)
    {
        if (input[i - 1] == 1)
        {
            A.push_front(i);
        }
        else if (input[i - 1] == 2)
        {
            int k = A.front();
            A.pop_front();
            A.push_front(i);
            A.push_front(k);
        }
        else if (input[i - 1] == 3)
        {
            A.push_back(i);
        }
    }

    while (N--)
    {
        cout << A.front() << " ";
        A.pop_front();
    }
}