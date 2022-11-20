#include <iostream>
using namespace std;

bool check_exist_element(int* arr, int length, int item) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == item) return true;
	}
	return false;
}

int main() {
	const int mod = 42;
	const int size = 10;
	int count = 0;
	int* mod_arr = new int[size];

	for (int i = 0; i < size; i++) {
		int number;
		cin >> number;

		if (!check_exist_element(mod_arr, count, number % mod)) {
			mod_arr[count] = number % mod;
			count++;
		}
	}

	cout << count << endl;
}
