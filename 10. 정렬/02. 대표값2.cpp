#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int* arr = new int[SIZE];

    for (int i=0;i<SIZE;i++){
        cin >> arr[i];
    }

    for (int i=0;i<SIZE;i++){
        for (int j=0;j<SIZE-i-1;j++){
            if (arr[j] < arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    int sum = 0;
    for (int i=0;i<SIZE;i++){
        sum += arr[i];
    }
    
    cout << sum / SIZE << endl;
    cout << arr[SIZE / 2] << endl;
    
}