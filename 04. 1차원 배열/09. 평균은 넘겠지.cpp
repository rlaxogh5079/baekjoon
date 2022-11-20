#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		int length;
		cin >> length;
		int* students = new int[length];
		for (int j = 0; j < length; j++) {
			cin >> students[j];
		}

		int sum = 0;
		for (int j = 0; j < length; j++) {
			sum += students[j];
		}

		double average = (double)sum / length;
		int count = 0;
		for (int j = 0; j < length; j++) {
			if (average < students[j]) count++;
		}

		cout << fixed;
		cout.precision(3);

		cout << (double)count / length * 100 << "%" << endl;
	}
}