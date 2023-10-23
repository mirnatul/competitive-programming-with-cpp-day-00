#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int money;
    cin >> money;

    if (money >= 15) {
        cout << "horlicks tea";
    } else if (money >= 10) {
        cout << "milk tea";
    } else {
        cout << "general tea";
    }

    return 0;
}