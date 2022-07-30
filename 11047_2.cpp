#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int a[11];
    int min = 0;

    cin >> N >> K;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int j = N - 1; j >= 0; j--)
    {
        min += K / a[j];
        K = K % a[j];
    }

    cout << min;
}