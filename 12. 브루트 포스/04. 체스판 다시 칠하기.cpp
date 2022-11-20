#include <iostream>
using namespace std;

int check_BW(string* arr, int column, int row, char check_color) {
	int cnt = 0;
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			
		}
	}
	return cnt;
}

int main() {
	int N, M;
	cin >> N >> M;

	string* arr = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int check_W = check_BW(arr, N, M, 'W');
	int check_B = check_BW(arr, N, M, 'B');
	int min = check_W;
	if (min > check_B) {
		min = check_B;
	}

	cout << check_W << check_B << endl;

}