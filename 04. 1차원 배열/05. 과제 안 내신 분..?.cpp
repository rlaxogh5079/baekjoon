#include <iostream>
using namespace std;

int main() {
    const int STUDENT = 30;
    bool* students_arr = new bool[STUDENT];
    fill_n(students_arr, STUDENT, false);

    for (int i=0;i<STUDENT-2;i++) {
        int number;
        cin >> number;
        students_arr[number-1] = true;
    }

    for (int i=0;i<STUDENT;i++){
        if (!students_arr[i]) {
            cout << i + 1 << endl;
        }
    }
}  