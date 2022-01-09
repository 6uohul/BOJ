#include <iostream>
#include <string>
using namespace std;
int main() {
	char word[100];
	int result = 0;
	char alpabet[] = "abcdefghijklmnopqrstuvwxyz";
	cin >> word;
	for (int i = 0; i < strlen(alpabet); i++) {
		for (int j = 0; j < strlen(word); j++) {
			if (alpabet[i] == word[j]) {
				cout << j << " ";
				result = 0;
				break;
			}
			else
				result = 1;
		}
		if (result == 1)
			cout << "-1 ";
	}
}