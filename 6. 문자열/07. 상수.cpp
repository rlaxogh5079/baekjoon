#include <iostream>
#include <sstream>
using namespace std;

inline int reverse_number(int number) {
	string number_str;
	char* new_number_str = new char[number_str.length()];
	stringstream ss;
	ss << number;
	ss >> number_str;

	for (int i = 0; i < number_str.length(); i++) {
		new_number_str[number_str.length() - 1 - i] = number_str[i];
	}

	int new_number;
	stringstream ssInt(new_number_str);
	ssInt >> new_number;

	return new_number;
}

int main() {
	int number1, number2;
	cin >> number1 >> number2;
	number1 = reverse_number(number1);
	number2 = reverse_number(number2);

	cout << ((number1 > number2) ? number1 : number2) << endl;
}