#include <iostream>
using namespace std;

int main() {
	int A, B, V, day;
	cin >> A >> B >> V;
	day = (V - A) / (A - B) + 1;

	if (A >= V) {
		cout << 1 << endl;
		return 0;
	}

	if ((V - A) % (A - B)) {
		cout << day + 1 << endl;
	}
	else if (!((V - A) % (A - B))) {
		cout << day << endl;
	}
}