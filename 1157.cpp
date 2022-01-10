#include <iostream>
#include <string>
using namespace std;

int main() {
	char alpabet[] = "abcdefghijklmnopqrstuvwxyz";
	char Alpabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int nums[26] = {0, };
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (input[i] == alpabet[j] || input[i] == Alpabet[j])
				nums[j] += 1;
		}
	}
	int max = nums[0];
	int max_index = 0;
	int overlap = 0;

	for (int i = 1; i < 26; i++) {
		if (nums[i] > max) {
			max = nums[i];
			max_index = i;
			overlap = 0;
		}
		else if(nums[i] == max) overlap = 1;
	}
	if (overlap == 1)
		cout << "?";
	else
		cout << Alpabet[max_index];
}