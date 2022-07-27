/*
[백준 1138번] 한 줄로 서기 문제
날짜: 2022.07.27(수)
문제 내용:
    N명의 사람이 줄을 선다.
    키가 1인 사람부터 차례대로 자신의 왼쪽에 자신보다 큰 사람이 몇 명 있었는지 기록한다.
    줄을 선 순서대로 키를 출력하는 프로그램을 작성한다.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> line;

int main()
{
    int N;
    int left[11];

    cin >> N; // N명의 사람

    for (int i = 0; i < N; i++)
    {
        cin >> left[i];
    }

    for (int k = N; k >= 1; k--)
    {
        vector<int>::iterator begin = line.begin();
        for (int i = 0; i < left[k - 1]; i++)
        {
            begin++;
        }
        line.insert(begin, k);
    }

    for (int j = 0; j < line.size(); j++)
    {
        cout << line[j] << " ";
    }
}