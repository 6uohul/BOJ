#include <iostream>
using namespace std;

int main()
{
    int num; //전체 사람 수
    int info[51][2];

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> info[i][0] >> info[i][1]; //몸무게, 키 입력
    }

    for (int j = 0; j < num; j++)
    {
        int rank = 1;
        for (int k = 0; k < num; k++)
        {
            if (info[k][0] > info[j][0] && info[k][1] > info[j][1])
            {
                rank += 1;
            }
        }
        cout << rank << " ";
    }

    return 0;
}