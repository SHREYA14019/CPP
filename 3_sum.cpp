#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int nums[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Sorting using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Finding triplets
    for (int i = 0; i < n - 2; i++) {

        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;

                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1])
                    j++;

                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }

    return 0;
}