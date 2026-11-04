#include <iostream>
using namespace std;

int main() {
    char a[100], b[100], res[100];

    cin >> a >> b;

    int i = 0, j = 0, k = 0, carry = 0;

    while (a[i] != '\0') i++;
    while (b[j] != '\0') j++;

    i--;
    j--;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    for (int p = k - 1; p >= 0; p--)
        cout << res[p];

    return 0;
}