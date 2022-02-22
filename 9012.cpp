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

        // input 문자열의 문자 하나씩 : (이면 push하고 )이면 pop해서 VPS인 것들 파악하기
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

        if (!s.empty())
            cout << "NO" << '\n';

        else if (cnt != 0)
            cout << "NO" << '\n';

        else
            cout << "YES" << '\n';

        while (!s.empty())
            s.pop();
        // 스택 초기화 해주기.. (꼭)
        // 아니면 따로 함수로 구현해주기
    }

    return 0;
}