#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;


    for (int i=0;i<length;i++) {
        string str;
        cin >> str;
        int count = 0;
        int l = 0;
        int r = str.length() - 1;
        bool flag = true;

        while(l <= r) {
            count++;

            if (str[l++] != str[r--]) {
                flag = false;
                break;
            }
        }

        cout << int(flag) << " " << ((flag && !(str.length() % 2)) ? count+1 : count) << "\n";
    }
}