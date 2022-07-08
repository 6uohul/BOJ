#include <iostream>
using namespace std;

/*
문제 내용: N개의 수가 주어졌을 때, 오름차순으로 정렬하는 프로그램 작성하기
날짜: 2022.07.08(금)

조건: N(1 ≤ N ≤ 1,000)
*/

int main()
{
    int N, tmp; // N개의 수
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++)
    {
        for (int k = j + 1; k < N; k++)
        {
            if (arr[j] > arr[k])
            {
                tmp = arr[j];
                arr[j] = arr[k];
                arr[k] = tmp;
            }
        }
    }

    for (int n = 0; n < N; n++)
    {
        cout << arr[n] << "endl;"
    }
}