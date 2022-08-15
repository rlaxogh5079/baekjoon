#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int test_case;
	cin >> test_case;
	while (test_case-- > 0) {
		int A, B;
		cin >> A >> B;
		cout << A + B << "\n";
	}
}