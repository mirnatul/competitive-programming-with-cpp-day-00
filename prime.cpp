#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num, result;
    cin >> num;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            result = 0;
            break;
        } else {
            result = 1;
        }
    }
    if (result == 0) {
        cout << "Not prime number";
    } else {
        cout << "Prime Number";
    }

    return 0;
}