#include <iostream>
using namespace std;

int main() {
	int number, cnt = 1, answer = 1, plus = 6;
	cin >> number;

	while (number > answer) {
		answer += plus;
		plus += 6;
		cnt++;
	}

	cout << cnt << endl;
}