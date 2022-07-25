/*
[백준 2805번] 나무 자르기 문제
날짜: 2022.07.24(일)
문제 내용:
    첫째 줄에 나무의 수 N과 상근이가 집으로 가져가려고 하는 나무의 길이 M이 주어진다.
    (1 ≤ N ≤ 1,000,000, 1 ≤ M ≤ 2,000,000,000)
    둘째 줄에는 나무의 높이가 주어진다. 나무의 높이의 합은 항상 M보다 크거나 같기 때문에, 상근이는 집에 필요한 나무를 항상 가져갈 수 있다.
    높이는 1,000,000,000보다 작거나 같은 양의 정수 또는 0이다.
    적어도 M미터의 나무를 집에 가져가기 위해서 절단기에 설정할 수 있는 높이의 최댓값을 구하는 프로그램을 작성하기
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N, M;
    cin >> N >> M;

    long long start, end, mid, cut_sum, max;
    int arr[N];
    max = 0;

    for (int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr + N);

    start = 0;
    end = arr[N - 1];

    while (start <= end)
    {
        cut_sum = 0;
        mid = (start + end) / 2;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] - mid > 0)
                cut_sum += arr[i] - mid; // 자른 나무 길이를 합한다
        }

        if (cut_sum >= M)
        {
            start = mid + 1;
            if (max < mid)
            {
                max = mid;
            }
        }
        else
            end = mid - 1;
    }

    cout << max;
}