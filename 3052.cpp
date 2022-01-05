#include <iostream>
using namespace std;

int main() {
	int re_array[42] = {};	//나머지를 저장하는 1차원 배열
	int input;
	int result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> input;
		if (!re_array[input % 42]++)
			result++;
	}
	cout << result;
}