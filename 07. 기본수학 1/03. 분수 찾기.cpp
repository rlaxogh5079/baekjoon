#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int i = 1;
	while (number > i)
		number -= i++;

	if (i % 2)
		cout << (i + 1 - number) << '/' << number << endl;
	else
		cout << number << '/' << (i + 1 - number) << endl;
}