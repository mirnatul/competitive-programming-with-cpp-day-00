#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;  // declaration
    a = 12; // initialization
    cout << "size of int " << sizeof(a) << endl;

    float b;  // declaration
    b = 3.14; // initialization
    cout << "size of float " << sizeof(b) << endl;

    char c;  // declaration
    c = 'x'; // initialization
    cout << "size of char " << sizeof(c) << endl;

    bool d; // declaration
    d = 1;  // initialization
    cout << "size of bool " << sizeof(d) << endl;

    short int si; // declaration
    si = 9834;    // initialization
    cout << "size of si " << sizeof(si) << endl;

    long int li;     // declaration
    li = 2849347985; // initialization
    cout << "size of li " << sizeof(li) << endl;

    return 0;
}
