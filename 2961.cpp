/*
[백준 2961번] 도영이가 만든 맛있는 음식
날짜: 2022.07.26
문제 내용:
    지금 도영이의 앞에는 재료가 N개 있다. 도영이는 각 재료의 신맛 S와 쓴맛 B를 알고 있다.
    여러 재료를 이용해서 요리할 때, 그 음식의 신맛은 사용한 재료의 신맛의 곱이고, 쓴맛은 합이다.

    시거나 쓴 음식을 좋아하는 사람은 많지 않다.
    도영이는 재료를 적절히 섞어서 요리의 신맛과 쓴맛의 차이를 작게 만들려고 한다.
    또, 물을 요리라고 할 수는 없기 때문에, 재료는 적어도 하나 사용해야 한다.

    재료의 신맛과 쓴맛이 주어졌을 때, 신맛과 쓴맛의 차이가 가장 작은 요리를 만드는 프로그램을 작성하시오.

    첫째 줄에 재료의 개수 N(1 ≤ N ≤ 10)이 주어진다. 다음 N개 줄에는 그 재료의 신맛과 쓴맛이 공백으로 구분되어 주어진다.
    모든 재료를 사용해서 요리를 만들었을 때, 그 요리의 신맛과 쓴맛은 모두 1,000,000,000보다 작은 양의 정수이다.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int N;
pair<int, int> n[10];
bool B[10];
int ans = 999999999;

void comb(int cnt, int index, int s, int b)
{
    if (cnt >= 1)
    {
        int result = abs(s - b); //신맛과 쓴맛의 차
        if (ans > result)
        {
            ans = result; //최솟값
        }
    }
    for (int x = index; x <= N; x++)
    {
        if (B[x] == false)
        {
            B[x] = true;
            //재귀함수
            comb(cnt + 1, x, s * n[x].first, b + n[x].second);
            B[x] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> n[i].first;  //신맛
        cin >> n[i].second; //쓴맛
    }

    comb(0, 1, 1, 0);

    cout << ans;
}