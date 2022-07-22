/*
[백준 1780번] 종이의 개수
날짜 : 2022.07.22 (금)
문제 내용:
    N×N크기의 행렬로 표현되는 종이가 있다.
    종이의 각 칸에는 -1, 0, 1 중 하나가 저장되어 있다.
    우리는 이 행렬을 다음과 같은 규칙에 따라 적절한 크기로 자르려고 한다.

    (1) 만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
    (2) (1)이 아닌 경우에는 종이를 같은 크기의 종이 9개로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
    이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int arr[2000][2000];
int result[3]; //결과

// 모두 같은 수로 되어 있는지 확인
bool check(int x, int y, int size)
{
    int color = arr[x][y];
    for (int i = 0; i < x + size; i++)
    {
        for (int j = 0; j < y + size; j++)
        {
            if (color != arr[i][j])
            {
                return false; //다른 수가 있는 경우 false
            }
        }
    }
    return true; //다 같은 수로 되어있는 경우 true
}

void divide(int x, int y, int size)
{
    if (check(x, y, size))
    {
        result[arr[x][y] + 1] += 1;
        return;
    }

    int divide_again = size / 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            divide(x + i * divide_again, y + j * divide_again, divide_again);
        }
    }
}

int main()
{
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    divide(0, 0, N);

    for (int k = 0; k < 3; k++)
    {
        cout << result[k] << "\n";
    }
}
