#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;

	for (int i = 1; i <= test_case; i++) {
		int A, B;
		cin >> A >> B;

		cout << "Case #" << i << ": " << A + B << endl;
	}
}