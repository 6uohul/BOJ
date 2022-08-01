/*
[백준 11399번] ATM 문제
문제 내용:
    줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때,
    각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하자
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int P[1001];
    int N;
    int sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    sort(P, P + N);

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += P[j];
        }
    }

    cout << sum;
}