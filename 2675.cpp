#include <iostream>
#include <string>
using namespace std;

int main() {
	int testCaseNum;
	cin >> testCaseNum;
	for (int i = 0; i < testCaseNum; i++) {
		int replyNum;
		string S;
		cin >> replyNum;
		cin >> S;
		
		for (int k = 0; k < S.length(); k++) {
			for (int j = 0; j < replyNum; j++) {
				cout << S[k];
			}
		}
		cout << endl;
	}
}