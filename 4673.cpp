#include <iostream>
using namespace std;
int main() {
	int num[10000] = { 1, };
	for (int i = 0; i < 10000; i++) {
		if (i < 10)
			num[i + 1] = 1;
		else if (i < 100)
			num[i + i / 10 + i % 10] = 1;
		else if (i < 1000)
			num[i + i / 100 + i%100 / 10 + i % 10] = 1;
		else if (i < 10000)
			num[i + i / 1000 + i%1000 / 100 + i%100 / 10 + i % 10] = 1;
	}
	for (int j = 0; j < 10000; j++) {
		if (num[j] != 0)
			cout << j << endl;
	}
}