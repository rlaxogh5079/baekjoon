#include <iostream>
using namespace std;

int main() {
	int hour, minute, add_minute;
	const int max_hour = 24;
	const int max_minute = 60;
	cin >> hour >> minute >> add_minute;

	if (minute + add_minute >= max_minute) {
		hour += (minute + add_minute) / max_minute;
		if (hour >= max_hour) hour %= max_hour;
		minute = (minute + add_minute) % max_minute;
	} 
	else {
		minute += add_minute;
	}

	cout << hour << " " << minute << endl;
}