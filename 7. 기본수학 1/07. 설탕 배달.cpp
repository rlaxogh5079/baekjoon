#include <iostream>
using namespace std;

int main() {
	int number, answer = 0;
	cin >> number;
	while (number >=0) {
		if (!(number % 5)) {
			answer += (number / 5);
			cout << answer << endl;
			return 0;
		}
		number -= 3;
		answer++;
	}
	cout << -1 << endl;
}