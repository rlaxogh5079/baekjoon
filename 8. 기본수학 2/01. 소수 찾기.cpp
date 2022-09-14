#include <iostream>
using namespace std;

inline int is_prime(int number) {
	if (number <= 1) {
		return 0;
	}
	for (int i = 2; i < number; i++) {
		if (!(number % i)) return 0;
	}
	return 1;
}

int main() {
	int size;
	cin >> size;

	int sum = 0;
	for (int i = 0; i < size; i++) {
		int number;
		cin >> number;
		sum += is_prime(number);
	}

	cout << sum << endl;
}