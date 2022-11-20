#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int max = arr[0], min = arr[0];

	for (int i = 1; i < size; i++) {
		max = (arr[i] > max) ? arr[i] : max;
		min = (arr[i] < min) ? arr[i] : min;
	}
	
	delete[] arr;

	cout << min << " " << max << endl;
}