/*
문제명 : 체스판 다시 칠하기 [백준 - 브루트 포스 1018번]

<입력>
첫째 줄에 N과 M이 주어진다. N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다.
둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.

<출력>
첫째 줄에 지민이가 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다.

 B : Black
 W : White
*/

#include <iostream>
#include <algorithm>
using namespace std;

int M, N;

char board[50][50];

char black_arr[8][8] = {
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'};

char white_arr[8][8] = {
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'};
//(0, 0)이 W인 체스보드 기준 바뀔 칸 수

int white(int y, int x)
{
    int cnt = 0;
    for (int i = y; i < y + 8; i++)
        for (int j = x; j < x + 8; j++)
            if (board[i][j] != white_arr[i - y][j - x])
                cnt++;

    return cnt;
}

//(0, 0)이 B인 체스보드 기준 바뀔 칸 수

int black(int y, int x)
{
    int cnt = 0;
    for (int i = y; i < y + 8; i++)
        for (int j = x; j < x + 8; j++)
            if (board[i][j] != black_arr[i - y][j - x])
                cnt++;

    return cnt;
}

int main(void)
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> board[i];

    int result = 123456;
    for (int i = 0; i + 7 < N; i++)
        for (int j = 0; j + 7 < M; j++)
            result = min(result, min(white(i, j), black(i, j)));
    cout << result << endl;
    return 0;
}