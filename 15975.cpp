/*
[BOJ 15975] 화살표 그리기
날짜 : 2022.07.12
문제 내용:

*/

#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000001
using namespace std;

vector<int> arr[100001];

int main()
{
    int N, x, c;
    cin >> N;

    long result = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> c;
        arr[c].push_back(x);
    }

    for (int color = 1; color < MAX; color++)
    {
        if (arr[color].empty())
        {
            continue;
        }

        sort(arr[color].begin(), arr[color].end());

        //제일 왼쪽 점이 바로 오른쪽 점과 이어짐
        result += arr[color][1] - arr[color][0];

        for (int j = 1; j < arr[color].size() - 1; j++)
        {
            int x = arr[color][j];
            // 양 옆 점 중 최소 거리를 결과에 더한다
            result += min(x - arr[color][j - 1], arr[color][j + 1] - x);
        }
        int lastIdx = arr[color].size() - 1;
        result += arr[color][lastIdx] - arr[color][lastIdx - 1];
    }

    cout << result << "\n";
}
