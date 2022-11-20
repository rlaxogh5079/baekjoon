#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <list>
using namespace std;

int main() {
    const int SIZE = 8002;
    int length;
    cin >> length;
    vector<int> arr;

    int sum = 0;
    int* count_arr = new int[SIZE];
    fill_n(count_arr, SIZE, 0);
    for (int i=0;i<length;i++){
        int number;
        cin >> number;
        sum += number;
        count_arr[SIZE/2-number]++;
        arr.push_back(number);
    }
    
    int mean = round(double(sum) / length);
    if (mean == -0) mean = 0;
    cout << mean << "\n";

    sort(arr.begin(), arr.end());
    cout << arr[arr.size() / 2] << "\n";

        int max = 0;
        for (int i=0;i<SIZE;i++){
            if (max < count_arr[i]){
                max = count_arr[i];
            }
        }

        list<int> count_list;
        for (int i=0;i<SIZE;i++){
            if (count_arr[i] == max){
                count_list.push_front(SIZE/2 - i);
            }
        }

    if (count_list.size() != 1) {
        count_list.pop_front();
    }

    cout << count_list.front() << "\n";

    cout << arr.back() - arr.front() << "\n";
}