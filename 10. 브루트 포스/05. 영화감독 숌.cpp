#include <iostream>
#include <string>
using namespace std;

int check_666(int number) {
    int i = 666;
    int series = 0;
    while (1) {
        string target = to_string(i);
        
        for (int j = 0; j < target.length() - 2; j++)
            if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
                series++;
                if (series == number)
                    return i;

                break;
            }
        i++;
    }
}
int main() {
    int N;
    cin >> N;
    cout << check_666(N);
}