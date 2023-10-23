#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
