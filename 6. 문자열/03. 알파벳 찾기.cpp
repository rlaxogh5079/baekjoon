#include <iostream>
using namespace std;

inline int get_alpha_num(char alpha) {
	return alpha - 'a';
}


int main() {
	const int ALPHA_LENGTH = 26;
	string text;
	cin >> text;

	int* alpha_cnt_arr = new int[ALPHA_LENGTH];
	fill_n(alpha_cnt_arr, ALPHA_LENGTH, -1);
	for (int i = 0; text[i] != NULL; i++) {
		if (alpha_cnt_arr[get_alpha_num(text[i])] == -1)
			alpha_cnt_arr[get_alpha_num(text[i])] = i;
	}

	for (int i = 0; i < ALPHA_LENGTH; i++) {
		cout << alpha_cnt_arr[i] << " ";
	}
	cout << endl;
}