#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x == 0 || x == 1) {
        cout << x;
        return 0;
    }

    int start = 1;
    int end = x;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        long long square = (long long)mid * mid;

        if (square > x) {
            end = mid - 1;
        }
        else if (square == x) {
            cout << mid;
            return 0;
        }
        else {
            start = mid + 1;
        }
    }

    cout << end;

    return 0;
}