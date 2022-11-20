#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int length;
    cin >> length;
    vector<pair<int, string>> arr;

    for (int i=0;i<length;i++){
        int age;
        string name;
        cin >> age >> name;
        arr.push_back({age, name});
    }

    stable_sort(arr.begin(), arr.end(), [](pair<int, string> f_people, pair<int, string> s_people) {
        return f_people.first < s_people.first;
    });

    for (pair<int, string> people : arr) {
        cout << people.first << " " << people.second << "\n";
    }
}