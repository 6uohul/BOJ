/*
[백준 10828] 스택
날짜 : 2022.07.19
문제 내용 :
    정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
    명령은 총 다섯 가지이다.

    push X: 정수 X를 스택에 넣는 연산이다.
    pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    size: 스택에 들어있는 정수의 개수를 출력한다.
    empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
    top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack;

    int N; //명령의 수
    cin >> N;

    while (N--)
    {
        string s = "";
        cin >> s;

        if (s == "push")
        { // push 명령어인 경우
            int num;
            cin >> num;
            stack.push(num);
        }

        else if (s == "pop")
        {
            if (stack.empty())
            {
                cout << "-1 \n";
            }
            else
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }

        else if (s == "size")
        {
            cout << stack.size() << "\n";
        }

        else if (s == "empty")
        {
            if (stack.empty())
            {
                cout << "1 \n";
            }
            else
            {
                cout << "0\n";
            }
        }

        else if (s == "top")
        {
            if (stack.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << stack.top() << "\n";
            }
        }
    }
}