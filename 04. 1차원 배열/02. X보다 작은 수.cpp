#include <iostream>
using namespace std;

int main() {
    int length, x;
    cin >> length >> x;

    int* arr = new int[length];
    int sum = 0;
    for (int i=0;i<length;i++){
        cin >> arr[i];
    }

    for (int i=0;i<length;i++) {
        if (arr[i] < x) {
            cout << arr[i] << " ";
        }
    }
}