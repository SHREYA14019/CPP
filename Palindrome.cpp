#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;

    cin >> n;

    original = n;

    if (n < 0) {
        cout << "false";
        return 0;
    }

    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }

    if (original == reversed) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}