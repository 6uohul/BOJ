#include <iostream>
using namespace std;

int primeNumber(int n) {
	int i = 0;
	int last = n / 2;
	if (n <= 1)
		return 0;	//¼Ò¼ö°¡ ¾Æ´Ô
	for (i = 2; i <= last; i++) {
		if (n % i == 0)
			return 0;
	}
	return n;
}
int main() {
	int m, n;
	cin >> m >> n;
	int minPrime = 0;
	int sum = 0;
	for (int num = m; num <= n; num++) {
		if (primeNumber(num) != 0) {
			if(minPrime == 0)
				minPrime = num;
			sum += num;
		}
	}
	if (minPrime == 0)
		cout << "-1\n";
	else {
		cout << sum << "\n";
		cout << minPrime << "\n";
	}
}