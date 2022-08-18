#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		int repeat_count;
		string text;
		cin >> repeat_count >> text;
		for (int j = 0; text[j] != NULL; j++) {
			for (int k = 0; k < repeat_count; k++) {
				cout << text[j];
			}
		}
		cout << endl;
	}
}