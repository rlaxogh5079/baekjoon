#include <iostream>
using namespace std;

int main() {
    const int SIZE = 9;
    int** arr = new int*[SIZE];
    for (int i=0;i<SIZE;i++) {
        arr[i] = new int[SIZE];

        for (int j=0;j<SIZE;j++) {
            cin >> arr[i][j];
        }
    }

    int max_value = arr[0][0];
    int max_x = 0;
    int max_y = 0;

    for (int i=0;i<SIZE;i++) {
        for (int j=0;j<SIZE;j++) {
            if (max_value <= arr[i][j]) {
                max_value = arr[i][j];
                max_x = i + 1;
                max_y = j + 1;
            }
        }
    }
    cout << max_value << endl << max_x << " " << max_y << endl;
}