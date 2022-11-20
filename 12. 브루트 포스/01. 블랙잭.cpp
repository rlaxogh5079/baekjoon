#include <iostream>
using namespace std;

int main() {
	int count, sum;
	cin >> count >> sum;

	int* card_arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> card_arr[i];
	}

	int max_sum = 0;

	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			for (int k = j + 1; k < count; k++) {
				if (i == j || j == k || i == k)
					break;

				int card_sum = card_arr[i] + card_arr[j] + card_arr[k];
				if (card_sum <= sum && card_sum > max_sum) {
					max_sum = card_sum;
				}
				
			}
		}
	}

	cout << max_sum << endl;
}