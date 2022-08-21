#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;

	while (test_case-- > 0) {
		int H, W, N;
		cin >> H >> W >> N;

		int H1 = N % H;
		int W1 = N / H;
		if (H1 > 0)
			W1++;
		else
			H1 = H;
		cout << H1 * 100 + W1 << endl;
	}
}