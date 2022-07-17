/*
[백준 9012번] 괄호
날짜: 2022.07.17(일)
문제 내용:
    첫번째줄에 테스트 데이터 T개를 입력하고
    T개의 테스트 데이터를 입력한다.
    올바른 괄호 문자열이면 YES, 아니면 No 출력한다
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    // 테스트 케이스 개수
    int T;
    cin >> T;
    cin.ignore();

    stack<char> s;

    while (T--)
    {
        string input;
        getline(cin, input);

        int cnt = 0;

        // input 문자열의 문자 하나씩 : '('이면 push하고 ')'이면 pop해서 VPS인 것들 파악하기
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '(')
            {
                s.push(input[i]);
            }
            else if (input[i] == ')')
            {
                if (!s.empty())
                    s.pop();

                else
                    cnt++;
            }
        }

        // VPS 문자열인지 출력하기

        if (!s.empty() || cnt != 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';

        while (!s.empty())
            s.pop();
    }

    return 0;
}