#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    const int PAPERSIZE = 10;
    bool** arr = new bool*[SIZE];

    for (int i=0;i<SIZE;i++) {
        arr[i] = new bool[SIZE];
        fill_n(arr[i], SIZE, false);
    }

    int paper;
    cin >> paper;

    for (int _=0;_<paper;_++) {
        int x, y;
        cin >> x >> y;
        for (int i=x; i<x+PAPERSIZE;i++) {
            for (int j=y;j<y+PAPERSIZE;j++) {
                arr[i][j] = true;
            }
        }
    }

    int sum = 0;
    for (int i=0;i<SIZE;i++) {
        for (int j=0;j<SIZE;j++){
            sum += arr[i][j];
        }
    }

    cout << sum << endl;
}
