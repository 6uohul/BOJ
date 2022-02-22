#include <iostream>
using namespace std;

int factorial(int num)
{
    int fac_num = 1;
    for (int i = num; i > 0; i--)
    {
        fac_num *= i;
    }
    return fac_num;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(n - k) * factorial(k));
}
