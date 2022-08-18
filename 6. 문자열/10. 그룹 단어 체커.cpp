#include <iostream>
using namespace std;

int main() {
	const int ALPHA_LENGTH = 26;
	string text;
	int test_case, cnt = 0;
	cin >> test_case;
	
	for (int i = 0; i < test_case; i++) {
		bool* used_alpha = new bool[26];
		bool flag = true;
		fill_n(used_alpha, ALPHA_LENGTH, false);
		cin >> text;
		for (int i = 0; i < text.length(); i++) {
			if (used_alpha[text[i] - 'a']) {
				flag = false;
				break;
			}

			if (i != text.length() - 1 && text[i + 1] != text[i]) {
				used_alpha[text[i] - 'a'] = true;
			}
		}

		if (flag) {
			cnt++;
		}
	}

	cout << cnt << endl;
}