#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;

    int* arr = new int[length];
    for (int i=0;i<length;i++) {
        cin >> arr[i];
    }

    int find_value;
    cin >> find_value;

    int sum = 0;
    for (int i=0;i<length;i++) {
        sum += (arr[i] == find_value);
    }

    cout << sum << endl;
}