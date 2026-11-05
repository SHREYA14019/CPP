#include <iostream>
using namespace std;

int main() {
    int n, m, d;
    cin >> n;

    int arr1[500], arr2[500];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;

    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    cin >> d;

    int count = 0;

    for(int i = 0; i < n; i++) {
        int flag = 1;

        for(int j = 0; j < m; j++) {
            int diff = arr1[i] - arr2[j];

            if(diff < 0)
                diff = -diff;

            if(diff <= d) {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            count++;
    }

    cout << count;

    return 0;
}