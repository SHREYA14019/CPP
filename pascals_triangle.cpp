#include <iostream>
using namespace std;

int main() {
    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    int arr[100][100] = {0};

    for (int i = 0; i < numRows; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;

        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    cout << "Pascal's Triangle:" << endl;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}