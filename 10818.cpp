#include <iostream>
using namespace std;

int main() {
	int N; //������ ����
	cin >> N;	//������ ���� �Է�
	int i = 0;
	int nums[N];

	while (i < N) {
		cin >> nums[i++];
	}
	
	int min, max;
	min = nums[0];
	max = nums[0];

	for (int j = 0; j < N; j++) {
		if (min > nums[j])
			min = nums[j];
		if (max < nums[j])
			max = nums[j];
	}

	cout << min << " " << max;
}