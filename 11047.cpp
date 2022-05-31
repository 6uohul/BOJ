#include <iostream>

using namespace std;

int a[11];
int result = 0;

int main()
{

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        result += k / a[i];
        k %= a[i];
    }

    cout << result;
}