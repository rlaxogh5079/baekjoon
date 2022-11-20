#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string str_number;
    cin >> str_number;

    vector<char> number(str_number.begin(), str_number.end());
    sort(number.begin(), number.end(), greater<int>());

    for (const char &c: number) {
        cout << c;
    }
    cout << "\n";
}