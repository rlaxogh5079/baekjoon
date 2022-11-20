#include <iostream>
using namespace std;

int main() {
	int number, count = 0;
	cin >> number;
	const int origin_number = number;

	while (true) {
		count++;
		number = (number % 10) * 10 + (number / 10 + number % 10) % 10;
		if (number == origin_number)
			break;
	}

	cout << count << endl;
}