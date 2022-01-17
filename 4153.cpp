#include <iostream>
using namespace std;

int main() {
	int exit = 0;
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}