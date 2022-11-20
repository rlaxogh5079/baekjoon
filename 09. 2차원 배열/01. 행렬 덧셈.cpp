#include <iostream>
using namespace std;

int main() {
    int x_size, y_size;
    cin >> x_size >> y_size;

    int** arr = new int*[x_size];
    int** arr2 = new int*[x_size];
    for (int i=0;i<x_size;i++){
        arr[i] = new int[y_size];

        for (int j=0;j<y_size;j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0;i<x_size;i++){
        arr2[i] = new int[y_size];

        for (int j=0;j<y_size;j++){
            cin >> arr2[i][j];
        }
    }

    for (int i=0;i<x_size;i++){
        for (int j=0;j<y_size;j++) {
            cout << arr[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }

}