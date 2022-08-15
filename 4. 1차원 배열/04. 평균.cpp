#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	double* arr = new double[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < size; i++) {
		max = (max < arr[i]) ? arr[i] : max;
	}

	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += (arr[i] / max * 100.0);
	}

	cout << fixed;
	cout.precision(6);
	cout << sum / size << endl;
}