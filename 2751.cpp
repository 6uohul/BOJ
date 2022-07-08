#include <iostream>
#include <algorithm>
using namespace std;

/*
문제 내용: [BOJ_2751] N개의 수가 주어졌을 때, 오름차순으로 정렬하는 프로그램 작성하기
날짜: 2022.07.08(금)

조건: N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다.
    이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다.

*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int arr[1000000];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}