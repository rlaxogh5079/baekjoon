#include <iostream>
using namespace std;

int main() {
	int size = 9;
	int* arr = new int[size];
	int index = 0;
	int max = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
			index = i + 1;
		}
	}
	delete[] arr;

	cout << max << endl;
	cout << index << endl;
}