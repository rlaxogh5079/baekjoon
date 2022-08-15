#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;

		if (number < X) cout << number << " ";
	}
	cout << endl;
}