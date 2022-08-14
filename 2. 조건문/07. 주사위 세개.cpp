#include <iostream>
#include <cstdarg>
using namespace std;

inline int max_dice(int args, ...) {
	va_list ap;
	va_start(ap, args);
	int max_value = -1;
	for (int i = 0; i < args; i++) {
		if (ap != NULL){
			int dice = va_arg(ap, int);
			if (max_value < dice) {
				max_value = dice;
			}
		}
	}
	va_end(ap);

	return max_value;
}

int main() {
	int dice1, dice2, dice3, price;
	cin >> dice1 >> dice2 >> dice3;
	if (dice1 == dice2 && dice2 == dice3) {
		price = 10000 + dice1 * 1000;
	}
	else if (dice1 != dice2 && dice2 != dice3 && dice1 != dice3) {
		price = max_dice(3, dice1, dice2, dice3) * 100;
	}
	else {
		if (dice1 == dice2 || dice1 == dice3) {
			price = 1000 + dice1 * 100;
		} 
		else {
			price = 1000 + dice2 * 100;
		}
	}
	cout << price << endl;
}