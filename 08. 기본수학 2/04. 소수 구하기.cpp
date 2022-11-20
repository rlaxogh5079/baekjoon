#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int MAX_SIZE = 1000000;
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

	int N, M;
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (eratos[i])
			cout << i << '\n';
	}

}