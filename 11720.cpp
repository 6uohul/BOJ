#include <iostream>
using namespace std;

int main() {
	int length;
	cin >> length;
	char c;
	int sum = 0;
	for (int i = 0; i < length; i++) {
		cin >> c;
		sum += c - 48;
	}
	cout << sum;
}