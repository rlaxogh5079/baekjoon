#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	switch ((x > 0) + (y > 0)) {
	case 0:
		cout << "3" << endl;
		break;
	case 1:
		cout << ((x > 0) ? "4" : "2") << endl;
		break;
	case 2:
		cout << "1" << endl;
	}

}