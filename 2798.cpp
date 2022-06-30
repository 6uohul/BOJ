#include <iostream>

/*
[BOJ] 브루트포스 - 2798번 블랙잭
Date : 2022.05.31(화)
문제내용 : 합이 M을 넘지 않으면서 최대한 가까운 카드 3장의 합을 찾는다.
*/

using namespace std;
#define MAX 100
int main()
{
    int N, M, max, sum = 0;
    int min = 9999999;
    int arr[MAX] = {
        0,
    };
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (M - sum < min && M - sum >= 0)
                {
                    min = M - sum;
                    max = sum;
                }
            }
    cout << max;
}