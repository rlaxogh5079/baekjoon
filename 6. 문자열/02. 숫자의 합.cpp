#include <iostream>
using namespace std;

int main() {
	string number;
	int test_case, sum = 0;
	cin >> test_case >> number;

	for (int i = 0; i < test_case; i++) {
		sum += number[i] - '0';
	}

	cout << sum << endl;
}