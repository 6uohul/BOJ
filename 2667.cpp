/*
[백준 2667번] 단지번호 붙이기
문제 내용:
    1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다.
    철수는 이 지도를 가지고 연결된 집의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다.
    지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int arr[26][26];
bool visited[26][26];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt;

vector<int> c;

void dfs(int x, int y)
{
    cnt++;
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N)
        {
            continue;
        }
        if (arr[nx][ny] == 1 && visited[nx][ny] == false)
        {
            dfs(nx, ny);
        }
    }
}

int main(int argc, const char *argv[])
{
    string input;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        for (int j = 0; j < N; j++)
        {
            arr[i][j] = input[j] - '0';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == false)
            {
                cnt = 0;
                dfs(i, j);
                c.push_back(cnt);
            }
        }
    }

    sort(c.begin(), c.end());
    cout << c.size() << '\n';
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << '\n';

    return 0;
}
