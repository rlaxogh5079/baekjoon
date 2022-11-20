#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int MAX_SIZE = 123456 * 2;
	bool* eratos = new bool[MAX_SIZE];
	fill_n(eratos, MAX_SIZE, true);
	eratos[0] = false;
	eratos[1] = false;

	for (int i = 2; i <= sqrt(MAX_SIZE); i++) {
		if (eratos[i]) {
			for (int j = i * i; j <= MAX_SIZE; j += i) {
				eratos[j] = false;
			}
		}
	}

	while (true) {
		int number;
		cin >> number;
		if (!number) break;

		int cnt = 0;
		for (int i = number + 1; i <= number * 2; i++) {
			cnt += eratos[i];
		}

		cout << cnt << endl;
	}
}