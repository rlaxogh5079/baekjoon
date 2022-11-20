#include <iostream>
using namespace std;

inline int fibonacci(int number) {
	if (number == 2) {
		return 1;
	}
	else if (number <= 1) {
		return number;
	}
	else {
		return fibonacci(number - 1) + fibonacci(number - 2);
	}
}

int main() {
	int number;
	cin >> number;

	cout << fibonacci(number) << endl;
}