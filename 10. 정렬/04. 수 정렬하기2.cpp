#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int length;
    cin >> length;
    vector<int> arr;

    for (int i=0;i<length;i++) {
        int number;
        cin >> number;
        arr.push_back(number);
    }

    sort(arr.begin(), arr.end());
    for (int i=0;i<length;i++){
        cout << arr[i] << "\n";
    }
}