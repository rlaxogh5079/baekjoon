#include <iostream>
#include <string>
using namespace std;

inline int function(int number) {
	int sum = 0;
	string str_number = to_string(number);
	for (int i = 0; i < str_number.length(); i++) {
		sum += str_number[i] - '0';
	}

	return sum + number;
}

int main() {
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		if (function(i) == number) {
			cout << i << endl;
			return 0;
		}
	}

	cout << 0 << endl;
}