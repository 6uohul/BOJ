#include <iostream>
using namespace std;

int main() {
	int re_array[42] = {};	//�������� �����ϴ� 1���� �迭
	int input;
	int result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> input;
		if (!re_array[input % 42]++)
			result++;
	}
	cout << result;
}