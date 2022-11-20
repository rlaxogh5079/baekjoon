#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	cout << (B % 10) * A << endl;
	cout << ((B % 100) / 10) * A << endl;
	cout << (B / 100) * A << endl;
	cout << B * A << endl;
}