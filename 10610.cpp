/*
[백준 10610번] 30
문제 내용:
    어느 날, 미르코는 우연히 길거리에서 양수 N을 보았다.
    미르코는 30이란 수를 존경하기 때문에, 그는 길거리에서 찾은 수에 포함된 숫자들을 섞어 30의 배수가 되는 가장 큰 수를 만들고 싶어한다.

    미르코를 도와 그가 만들고 싶어하는 수를 계산하는 프로그램을 작성하자.
*/

// 30의 배수: 마지막 수가 0
//          각 자리 수의 합이 3의 배수

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<>());

    if (s[s.length() - 1] != '0')
        cout << -1;

    else
    {
        long long sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += (s[i] - '0');
        }
        if (sum % 3 == 0)
            cout << s;
        else
            cout << -1;
    }
}