/*
[백준 10816번] 숫자 카드 2
날짜 : 2022.07.22
문제 내용:
    숫자 카드는 정수 하나가 적혀져 있는 카드이다.
    상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때,
    이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;

    int card[n];

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    cin >> m;
    sort(card, card + n);

    for (int k = 0; k < m; k++)
    {
        int num;
        cin >> num;
        cout << upper_bound(card, card + n, num) - lower_bound(card, card + n, num) << " ";
    }
}