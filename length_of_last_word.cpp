#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = s.length() - 1;
    int count = 0;

    while (i >= 0 && s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    cout << count;

    return 0;
}