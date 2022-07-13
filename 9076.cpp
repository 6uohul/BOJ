/*
[백준 9076번] 점수 집계
날짜: 2022.07.13
문제 내용:
    이전에는 5명의 심판이 1점부터 10점까지 정수의 점수를 주면
    최고점과 최저점을 하나씩 제외한 점수의 합을 총점으로 하였다.
    이를 보완하기 위해서 최고점과 최저점을 뺀 나머지 3명 점수의 최고점과 최저점의 차이가 4점 이상 나게 되면
    점수 조정을 거쳐서 다시 점수를 매기려고 한다.
    점수를 집계하여 총점을 계산하거나, 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는
    총점 대신 KIN(Keep In Negotiation)을 출력하는 프로그램을 작성하시오.


*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int list[10][5];
    int T; // testcase 개수
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> list[i][0] >> list[i][1] >> list[i][2] >> list[i][3] >> list[i][4];
    }

    for (int j = 0; j < T; j++)
    {
        sort(list[j], list[j] + 5);
        if (list[j][3] - list[j][1] >= 4)
        {
            cout << "KIN"
                 << "\n";
        }
        else
        {
            cout << list[j][1] + list[j][2] + list[j][3] << "\n";
        }
    }
}
