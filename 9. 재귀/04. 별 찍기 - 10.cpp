#include <iostream>
using namespace std;

void function(int n, int i, int j) {
    if (n == 1) {
        cout << "*";
    }
    else if ((i / (n / 3)) % 3 == 1 && (j / (n / 3)) % 3 == 1) {
        cout << " ";
    }
    else {
        function(n / 3, i, j);
    }
}

int main() {
    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            function(number, i, j);
        }
        cout << endl;
    }
}