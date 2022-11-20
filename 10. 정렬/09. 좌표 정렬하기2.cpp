#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int length;
    cin >> length;

    vector<pair<int ,int>> points;
    for (int i=0;i<length;i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    sort(points.begin(), points.end(), [](pair<int, int> &a_point, pair<int, int> &b_point) {
        if (a_point.second == b_point.second) {
            return a_point.first < b_point.first;
        } else {
            return a_point.second < b_point.second;
        }
    });

    for (int i=0;i<length;i++) {
        cout << points[i].first << " " << points[i].second << "\n";
    }
}