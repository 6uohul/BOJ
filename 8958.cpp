#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num;
	cin >> num;	//문제 수 입력
	int index = 0;
	int score = 0;
	int total_score = 0;
	char testCase[80];
	for (int i = 0; i < num; i++) {
		cin >> testCase;
		for(int k = 0; k < strlen(testCase); k++) {
			if (testCase[k] == 'O') {
				score++;
				total_score += score;
			}
			if (testCase[k] == 'X') {
				score = 0;
			}
		}
		cout << total_score << endl;
		score = 0;
		total_score = 0;
		
	}
}