#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	string* arr = new string[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int* arr_sum = new int[size];
	
	for (int i = 0; i < size; i++) {
		arr_sum[i] = 0;
		int sum_acc = 1;
		for (int j = 0; arr[i][j] != NULL; j++) {
			if (arr[i][j] == 'O') {
				arr_sum[i] += sum_acc++;
			}
			if (arr[i][j] == 'X') {
				sum_acc = 1;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr_sum[i] << endl;
	}
}