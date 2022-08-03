/*
[백준 1300번] K번째 수
문제 내용:
    세준이는 크기가 N×N인 배열 A를 만들었다.
    배열에 들어있는 수 A[i][j] = i×j 이다.
    이 수를 일차원 배열 B에 넣으면 B의 크기는 N×N이 된다.
    B를 오름차순 정렬했을 때, B[k]를 구해보자.

    배열 A와 B의 인덱스는 1부터 시작한다.
*/

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, k;
    cin >> N >> k;

    int start = 1;
    int end = k;
    int result = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        long long num = 0;
        for (int i = 1; i <= N; i++)
            num += min(mid / i, N);
        if (num < k)
            start = mid + 1;
        else
        {
            result = mid;
            end = mid - 1;
        }
    }
    cout << result;
    return 0;
}