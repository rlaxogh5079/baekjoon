#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;

	
	while (test_case--) {
		int k, n;
		cin >> k >> n;
		int dp[15][15] = { 0 };

		for (int i = 0; i < 15; i++)
			dp[0][i] = i;
		for (int i = 1; i <= k; i++)
			for (int j = 1; j <= n; j++)
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

		cout << dp[k][n] << endl;
		
	}
}