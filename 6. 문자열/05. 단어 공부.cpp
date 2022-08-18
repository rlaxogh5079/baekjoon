#include <iostream>
using namespace std;

int main() {
	const int ALPHA_LENGTH = 26;
	int* alpha_cnt_arr = new int[ALPHA_LENGTH] {0, };
	string words;
	cin >> words;
	int max = 0;

	for (int i = 0; words[i] != NULL; i++) {
		if (++alpha_cnt_arr[toupper(words[i]) - 'A'] > max){
			max = alpha_cnt_arr[toupper(words[i]) - 'A'];
		}
	}

	int max_cnt = 0;
	int max_index = 0;
	for (int i = 0; i < ALPHA_LENGTH; i++) {
		if (alpha_cnt_arr[i] == max) {
			max_cnt++;
			max_index = i;
		}
	}

	if (max_cnt == 1) {
		cout << (char)(max_index + 'A') << endl;
	} 
	else {
		cout << '?' << endl;
	}
}