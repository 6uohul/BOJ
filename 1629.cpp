/*
[백준 1629번] 곱셈 문제
날짜 : 2022.07.25(월)
문제 내용:
    자연수 A를 B번 곱한 수를 알고 싶다.
    단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

    A, B, C는 모두 2,147,483,647 이하의 자연수
*/

#include <iostream>

using namespace std;

long long a, b, c;

long long power(long long a, long long b, long long c)
{
    if (b == 0)
    { //거듭제곱이 0인 경우
        return 1;
    }
    else if (b == 1)
    {
        return a % c;
    }
    else if (b % 2 == 0)
    {
        long long x = power(a, b / 2, c);
        return x * x % c;
    }
    else
    { //홀수인 경우
        return a * power(a, b - 1, c) % c;
    }
}

int main()
{
    cin >> a >> b >> c;
    cout << power(a, b, c);
}