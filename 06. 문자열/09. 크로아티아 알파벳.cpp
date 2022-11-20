#include <iostream>
using namespace std;

int main() {
	string text;
	cin >> text;
	int text_length = text.length();

	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'c' || text[i] == 's') {
			if (i != text.length()) {
				if (text[i + 1] == '=' || text[i + 1] == '-') {
					text_length -= 1;
				}
			}
		}

		if (text[i] == 'd') {
			if (i != text.length()) {
				if (text[i + 1] == '-') {
					text_length -= 1;
				}
			}
		}

		if (text[i] == 'z') {
			if (i != text.length()) {
				if (i != 0 && text[i - 1] == 'd' && text[i + 1] == '=') {
					text_length -= 2;
				}
				else if (text[i + 1] == '=') {
					text_length -= 1;
				}
			}
		}

		if (text[i] == 'l' || text[i] == 'n') {
			if (i != text.length()) {
				if (text[i + 1] == 'j') {
					text_length -= 1;
				}
			}
		}
	}
		cout << text_length << endl;
}