/*
[백준 2839번] 설탕 배달
문제 내용:
    상근이 설탕 Nkg를 배달하려고 한다.
    봉지는 3,5kg짜리 봉지가 있을 때 최대한 적은 봉지를 가져가려고 한다.
    봉지의 최소개수를 출력하는 프로그램을 작성하자

    단, (3 ≤ N ≤ 5000)
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int t = 0;
    int f = 0;
    bool b = 0;

    while (N % 5 != 0)
    {
        if (N < 3) // 3으로 나누어 떨어지지않음
        {
            b = 1; //-1
            break;
        }
        t++;
        N -= 3;
    }

    if (b == 0)
    {
        f = N / 5;
        cout << f + t << "\n";
    }
    else
        cout << "-1" << endl;
}