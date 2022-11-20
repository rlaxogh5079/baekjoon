#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int length;
    cin >> length;
    vector<pair<int, int>> arr;

    for (int i=0;i<length;i++){
        int number;
        cin >> number;
        arr.push_back({i, number});
    }

    sort(arr.begin(), arr.end(), [](pair<int, int> first_point, pair<int, int> second_point){
        return first_point.second < second_point.second;
    });

    int number = 0;

    for (int i=0;i<length;i++) {
        if (i < length - 1&& arr[i].second == arr[i+1].second) {
            arr[i].second = number;
        }
        else {
            arr[i].second = number++;
        }
    }

    sort(arr.begin(), arr.end(), [](pair<int, int> first_point, pair<int, int> second_point){
        return first_point.first < second_point.first;
    });

    for (pair<int, int> point: arr) {
        cout << point.second << " ";
    }
}