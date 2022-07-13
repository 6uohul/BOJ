/*
[백준 1427번] 소트인사이드
날짜 : 2022.07.14
문제 내용: 입력한 수의 각 자리 수를 내림차순으로 정렬하기

첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool comp(char a, char b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;
    string str;

    str = to_string(N);

    sort(str.begin(), str.end(), comp);

    cout << str;
}
