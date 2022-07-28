/*
[백준 9663번] N-Queen 문제
문제 내용:
    N*N 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓을 수 있는 방법의 수를 출력하는 프로그램을 만들자.
    (퀸은 상하좌우, 대각선 칸수 관계없이 움직일 수 있음)

    단, 1 <= N < 15
*/

#include <iostream>
using namespace std;

int N, cnt = 0;
int chess[15] = {
    0,
}; //체스판 chess[0]=1 => (0,1)에 위치

void nQueen(int Q)
{
    if (Q == N)
    {             // N번째 퀸인 경우
        cnt += 1; //경우의 수++
        return;
    }

    for (int x = 0; x < N; x++)
    {
        int check = 1;
        for (int y = 0; y < Q; y++)
        {
            chess[Q] = x;
            //같은 줄에 있거나 대각선에 있는 경우
            if ((chess[Q] == chess[y]) || ((y - Q) == (chess[y] - chess[Q])) || ((y - Q) == (chess[Q] - chess[y])))
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            nQueen(Q + 1);
        }
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        chess[0] = i;
        nQueen(1);
    }
    cout << cnt;
}
