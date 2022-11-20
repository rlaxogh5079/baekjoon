#include <iostream>
using namespace std;

void merge_sort(int* arr, int p, int r, int& k);
void merge(int* arr, int p, int q, int r, int& k);

int main() {
    int length, k;
    cin >> length >> k;
    int* arr = new int[length];
    int& k_ref = k;
    
    for (int i=0;i<length;i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    merge_sort(arr, 0, length - 1, k_ref);

    if (k > 0){
        cout << -1 << "\n";
    }
}

void merge_sort(int* arr, int p, int r, int& k) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(arr, p, q, k);
        merge_sort(arr, q + 1, r, k);
        merge(arr, p, q, r, k);
    }
}

void merge(int* arr, int p, int q, int r, int& k) {
    int i = p;
    int j = q + 1;
    int t = 1;
    int tmp[r+2];
    while (i <= q && j <= r) {
        if (arr[i] <= arr[j]) {
            tmp[t++] = arr[i++];
        } 
        else {
            tmp[t++] = arr[j++];
        }
    }
    while(i <= q) {
        tmp[t++] = arr[i++];
    }
    while (j <= r) {
        tmp[t++] = arr[j++];
    }
    i = p;
    t = 1;
    while (i <= r) {
        arr[i++] = tmp[t++];
        if(--k == 0){
            cout << tmp[t-1] << "\n";
        }  
    }
}