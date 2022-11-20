#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int length;
    cin >> length;
    vector<string> arr;

    for (int i=0;i<length;i++){
        string str;
        cin >> str;
        arr.push_back(str);
    }

    sort(arr.begin(), arr.end(), [](string &first, string &second) {
        if (first.length() == second.length()) {
            return first < second;
        }
        else {
            return first.length() < second.length();
        }
    });
    vector<string>::iterator ustr= unique(arr.begin(), arr.end());
    arr.erase(ustr, arr.end());

    for (string str : arr) {
        cout << str << "\n";
    }
}