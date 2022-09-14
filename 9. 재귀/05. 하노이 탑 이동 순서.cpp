#include <iostream>
using namespace std;

inline void function(int number, int from, int to, int bypass) {
	if (number == 1) {
		cout << from << " " << to << '\n';
	}
	else {
		function(number - 1, from, bypass, to);
		cout << from << " " << to << '\n';
		function(number - 1, bypass, to, from);
	}
}

int main() {
	int number;
	cin >> number;
	cout << (1 << number) - 1 << '\n';
	function(number, 1, 3, 2);
}