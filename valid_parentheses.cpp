#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char arr[10000];
    int top = -1;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            arr[++top] = ch;
        }
        else {
            if (top == -1) {
                cout << "false";
                return 0;
            }

            char x = arr[top--];

            if ((ch == ')' && x != '(') ||
                (ch == '}' && x != '{') ||
                (ch == ']' && x != '[')) {
                cout << "false";
                return 0;
            }
        }
    }

    if (top == -1)
        cout << "true";
    else
        cout << "false";

    return 0;
}