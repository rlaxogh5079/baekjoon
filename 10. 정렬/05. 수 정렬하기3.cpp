#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    const int SIZE = 10000;
    int* arr = new int[SIZE];
    fill_n(arr, SIZE, 0);

    int length;
    cin >> length;
    for (int i=0;i<length;i++) {
        int number;
        cin >> number;
        arr[number-1]++;
    }

    for (int i=0;i<SIZE;i++) {
        for (int j=0;j<arr[i];j++){
            cout << i + 1 << "\n";
        }
    }
}