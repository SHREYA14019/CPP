#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digits[100];

    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;
            break;
        }
        digits[i] = 0;
    }

    if(digits[0] == 0) {
        cout << 1 << " ";
    }

    for(int i = 0; i < n; i++) {
        cout << digits[i] << " ";
    }

    return 0;
}