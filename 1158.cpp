#include <iostream>

int n, m, arr[5007];

using namespace std;

int main()
{

    cin >> n >> m;
    int i, j;

    for (i = 0; i < n; ++i)
        arr[i] = i + 1;

    i = n - 1;
    int size = n;

    cout << "<";

    while (size > 1)
    {
        i = (i + m) % size;
        cout << arr[i] << ". ";
        --size;
        for (j = i; j < size; ++j)
            arr[j] = arr[j + 1];
        --i;
    }
    cout << arr[0];

    return 0;
}