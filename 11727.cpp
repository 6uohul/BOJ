/*
[백준 11727번] 2*n 타일링 2
문제 내용:
    2×n 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
    첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)
    첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다
*/

#include <iostream>

using namespace std;

int n;
int main()
{
    cin >> n;

    int t[1001];

    t[1] = 1;
    t[2] = 3; // 2칸짜리 경우의 수는 3가지

    for (int i = 3; i <= n; i++)
    {
        t[i] = (t[i - 1] + t[i - 2] * 2) % 10007;
    }

    cout << t[n];
}