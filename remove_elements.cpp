#include <iostream>
using namespace std;

int main() {
    int n, val;
    cin >> n;

    int nums[100];

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> val;

    int k = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    cout << k << endl;

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}