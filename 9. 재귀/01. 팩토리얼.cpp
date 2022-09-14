#include <iostream>
using namespace std;

inline int factorial(int number) {
	if (number <= 1) {
		return 1;
	}
	else {
		return number * factorial(number - 1);
	}
}

int main() {
	int number;
	cin >> number;

	cout << factorial(number) << endl;
}