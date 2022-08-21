#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	if (A.length() < B.length()) {
		string tmp = A;
		A = B;
		B = tmp;
	}

	for (int i = 0; i < A.length(); i++) {
		if (i >= B.length()) {
			B = "0" + B;
		}
	}


	bool flag = false;
	for (int i = A.length() - 1 ; i >= 0; i--) {
		A[i] -= '0';
		B[i] -= '0';
		A[i] = A[i] + B[i] + flag + '0';
		flag = false;

		if (!isdigit(A[i])) {
			A[i] -= 10;
			flag = true;
		}

	}

	if (flag) {
		A = "1" + A;
	}

	cout << A << endl;
}