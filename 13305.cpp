/*
[백준 13305번] 주유소 문제
문제 내용:
    N개의 도시, 제일 왼쪽에서 오른쪽 도시까지 이동하는데 기름을 충전해야한다.
    최소 비용을 계산하는 프로그램을 작성하자.

    2 <= N <= 100,000

    첫번째 줄에는 N, 다음 줄에는 도시를 연결하는 도로의 길이(N-1개), 마지막 줄에는 각 도시의 리터당 기름 가격을 입력한다
*/

#include <iostream>
#include <vector>

using namespace std;

long long cost = 0;

int main()
{
    long long N; // r은 도로의 길이 배열, c는 도시의 리터당 기름 가격 배열
    cin >> N;

    vector<long long int> r;
    vector<long long> c;

    for (int i = 0; i < N - 1; i++)
    {
        long long road;
        cin >> road;
        r.push_back(road);
    }
    for (int i = 0; i < N; i++)
    {
        int cost;
        cin >> cost;
        c.push_back(cost);
    }

    cost = c[0] * r[0]; //처음 출발할 때 기름 충전

    long long int cnt = 1;
    while (cnt + 1 != N)
    {
        if (c[cnt] < c[cnt + 1])
        { //뒤의 기름 가격이 더 싸면
            cost += c[cnt] * (r[cnt] + r[cnt + 1]);
            cnt++;
        }
        else
        {
            cost += c[cnt] * r[cnt];
        }
        cnt++;
    }

    cout << cost;
}
