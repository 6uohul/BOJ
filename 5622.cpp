#include<iostream>
using namespace std;

int main() {
	string a; // 문자열 입력 변수
	cin >> a;

	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 }; // 시간 배열

	int result = 0; // 최종 값

	for (int i = 0; a[i] != NULL; i++) {
		result += time[a[i] - 'A'];
	}

	cout << result << endl;
}