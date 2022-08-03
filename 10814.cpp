/*
[백준 10814번] 나이순 정렬
문제 내용:
    온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 이때, 회원들을 나이가 증가하는 순으로,
    나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<int, string>> P(N);

    for (int i = 0; i < N; i++)
    {
        cin >> P[i].first >> P[i].second;
    }

    stable_sort(P.begin(), P.end(), comp);

    for (int i = 0; i < N; i++)
    {
        cout << P[i].first << " " << P[i].second << "\n";
    }
}