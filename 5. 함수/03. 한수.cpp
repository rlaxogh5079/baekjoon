#include <iostream>
using namespace std;

inline int get_abs(int number) {
	return (number > 0) ? number : -number;
}

inline bool check_mathematical_stroke(int number) {
	return number < 100 || number / 10 % 10 - number % 10 == number / 100 - (number / 10) % 10;
}

int main() {
	int value;
	cin >> value;
	int count = 0;
	for (int i = value; i > 0; i--) {
		if (check_mathematical_stroke(i)) {
			count++;
		}
	}
	cout << count << endl;
}