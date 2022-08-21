/*
[백준 5525번] IOIOI
문제 내용:
    I와 O로만 이루어진 문자열 S와 정수 N이 주어졌을 때,
    S안에 PN이 몇 군데 포함되어 있는지 구하는 프로그램을 작성하자.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    string s;
    cin >> n >> m >> s;

    int result = 0;

    for (int i = 0; i < m; i++)
    {

        int k = 0;

        if (s[i] == 'O')
            continue;

        while (s[i + 1] == 'O' && s[i + 2] == 'I')
        {
            k++;

            if (k == n)
            {
                result++;
                k--;
            }

            i += 2;
        }
    }

    cout << result << '\n';
}