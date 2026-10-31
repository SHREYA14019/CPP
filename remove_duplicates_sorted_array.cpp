#include <iostream>
using namespace std;

int main() {
    int n, nums[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int k = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    cout << k << endl;

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}