#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	const int max_hour = 24;
	const int max_minute = 60;
	const int early_minute = 45;
	cin >> hour >> minute;

	if (minute < early_minute) {
		hour = (hour == 0) ? (max_hour - (early_minute - minute + 1) / max_minute - 1) : hour - 1;
		minute += (max_minute - early_minute);
	}
	else {
		minute -= early_minute;
	}

	cout << hour << " " << minute << endl;
}