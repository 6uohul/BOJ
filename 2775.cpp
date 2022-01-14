#include <iostream>
using namespace std;

int numOfPeople(int k, int n) {
	if (n == 1)
		return 1;
	if (k == 0)
		return n;
	return (numOfPeople(k - 1, n) + numOfPeople(k, n - 1));
}

int main() {
	int testCase;
	int k, n;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> k;
		cin >> n;
		cout << numOfPeople(k, n) << "\n";
	}
}