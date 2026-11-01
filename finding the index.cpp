#include <iostream>
#include <string>
using namespace std;

int main() {
    string haystack, needle;
    cin >> haystack >> needle;

    int ans = haystack.find(needle);

    cout << ans;

    return 0;
}