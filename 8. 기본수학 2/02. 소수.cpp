#include <iostream>
using namespace std;

inline int is_prime(int number) {
	if (number <= 1) {
		return 0;
	}
	for (int i = 2; i < number; i++) {
		if (!(number % i)) return 0;
	}
	return 1;
}

int main() {
	int N, M;
	cin >> N >> M;

	int min = 10001;
	int sum = 0;
	for (int i = N; i <= M; i++) {
		if (is_prime(i)) {
			sum += i;
			min = (min > i) ? i : min;
		}
	}

	if (sum) {
		cout << sum << endl;
		cout << min << endl;
	}
	else {
		cout << -1 << endl;
	}
}