/*
[백준 1065번] 한수 문제
날짜: 2022.07.26
문제 내용:
    어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
    등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
    N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.

    입력은 1000보다 작거나 같은 수 N이 주어진다
*/

#include <iostream>

using namespace std;

int hansoo(int x)
{
    int X[3];
    X[2] = x / 100;
    X[1] = x % 100 / 10;
    X[0] = x % 10;

    if (X[2] == 0)
    {
        return 1;
    }
    else
    { //세자리 수인 경우
        if (X[2] - X[1] == X[1] - X[0])
        {
            return 1;
        }
        else
        { //등차수열이 아닌 경우
            return 0;
        }
    }
}
int main()
{
    int result = 0;
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        result += hansoo(i);
    }

    cout << result;
}