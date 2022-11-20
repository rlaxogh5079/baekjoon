#include <iostream>
using namespace std;

int main() {
    int length, cut_line;
    cin >> length >> cut_line;
    int* arr = new int[length];

    for (int i=0;i<length;i++){
        cin >> arr[i];
    }

    for (int i=0;i<length;i++){
        for (int j=0;j<length-i-1;j++){
            if (arr[j+1] > arr[j]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    cout << arr[cut_line - 1] << endl;
}