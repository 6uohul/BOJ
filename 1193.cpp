#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	int k = 1;
	while (input > k) {
		input -= k;
		k++;
	}

	if (k % 2 == 0) {
		cout << input << "/" << k + 1 - input << endl;
	}
	else
		cout << k + 1 - input << "/" << input << endl;
}