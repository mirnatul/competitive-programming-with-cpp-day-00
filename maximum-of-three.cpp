#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << a << " is the largest number\n";
        } else {
            cout << c << " is the largest number\n";
        }
    } else if (b > c) {
        cout << b << " is the largest number\n";
    } else {
        cout << c << " is the largest number\n";
    }

    return 0;
}
