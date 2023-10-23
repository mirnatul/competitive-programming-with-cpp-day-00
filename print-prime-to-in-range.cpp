#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int min, max, result, j;
    cin >> min >> max;

    for (int i = min; i <= max; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                result = 0;
                break;
            } else {
                result = 1;
            }
        }
        if (result == 1) {
            cout << j << endl;
        }
    }

    return 0;
}