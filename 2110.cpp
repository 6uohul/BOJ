/*
[백준 2110번] 공유기 설치
날짜 : 2022.07.22 (금)
문제 내용:
    도현이는 언제 어디서나 와이파이를 즐기기 위해서 집에 공유기 C개를 설치하려고 한다.
    최대한 많은 곳에서 와이파이를 사용하려고 하기 때문에,
    한 집에는 공유기를 하나만 설치할 수 있고, 가장 인접한 두 공유기 사이의 거리를 가능한 크게 하여 설치하려고 한다.

    C개의 공유기를 N개의 집에 적당히 설치해서, 가장 인접한 두 공유기 사이의 거리를 최대로 하는 프로그램을 작성하라.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, C; //집 n개, 공유기 c개
vector<int> house;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        house.push_back(n);
    }

    //집들을 오름차순으로 정렬
    sort(house.begin(), house.end());

    //집의 최소거리는 1, 최대거리는 1번째와 n번째 집 거리
    //거리를 이용하여 이분 탐색을 진행한다.
    int start = 1;

    int end = house[N - 1] - house[0]; //최대 거리
    int result = 0;

    // 집들의 거리를 기준으로 이분 탐색
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int count = 1;
        int prev_house = house[0];

        for (int i = 1; i < N; i++)
        {
            if (house[i] - prev_house >= mid)
            {
                count++;
                prev_house = house[i];
            }
        }

        if (count >= C) //공유기를 C개 이상 사용한 경우 -> 공유기 설치 거리를 늘림
        {
            result = max(result, mid);
            start = mid + 1;
        }
        //공유기 개수가 C개보다 적은 경우 -> 공유기 설치 거리 좁힘
        else
            end = mid - 1;
    }
    cout << result;
}