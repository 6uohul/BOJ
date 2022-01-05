#include <iostream>
using namespace std;

int main(void) {
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	int nums = num1 * num2 * num3;
	int num[10] = {};

	int n_count, count;
	n_count = 0;
	count = 0;

	while (nums != 0) {
		num[nums % 10] += 1;
		nums /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}
}