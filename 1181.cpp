/*
[백준 1181번] 단어 정렬
날짜: 2022.07.12(화)
문제 내용:
    알파벳 소문자로 이루어진 N개의 단어가 들어오면
    아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
        -> 길이가 짧은 것부터
        -> 길이가 같으면 사전 순으로
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string arr[20000];

bool comp(string a, string b)
{
    if (a.length() == b.length()) // 길이가 같으면 사전순
        return a < b;
    return a.length() < b.length(); // 길이가 다르면 짧은 순
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N, comp);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            continue;
        }
        cout << arr[i] << '\n';
    }
}