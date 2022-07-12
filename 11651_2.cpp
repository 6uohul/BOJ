/*
[백준 11651번] 좌표 정렬하기 2
문제 내용: 2차원 평면 위의 점 N개가 주어진다.
    좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음
    출력하는 프로그램을 작성하시오.

날짜 : 2022.07.12
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    else if (a.second == b.second)
    {
        if (a.first < b.first)
            return true;
    }

    return false;
}

int main()
{
    int n;
    vector<pair<int, int>> vec;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }

    sort(vec.begin(), vec.end(), comp);
    for (int i = 0; i < n; ++i)
    {
        cout << vec[i].first << ' ' << vec[i].second << "\n";
    }
}