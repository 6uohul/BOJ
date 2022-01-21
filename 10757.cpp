#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string res(max(a.size(), b.size()), '0');
	bool carry = false;
	int i, tmp;

	for (i = 0; i < res.size(); i++) {
		tmp = carry;
		carry = false;

		if (i < a.size())
			tmp += a[a.size() - i - 1] - '0';
		if (i < b.size())
			tmp += b[b.size() - i - 1] - '0';
		if (tmp >= 10) {
			carry = true;
			tmp -= 10;
		}
		res[res.size() - i - 1] = tmp + '0';
	}

	if (carry)
		res.insert(res.begin(), '1');
	cout << res;
}