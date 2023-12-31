#include <iostream>
using namespace std;


int main(void) {
    int a = 0, b = 0, c = 0;

    int testCasesNum = 0;
    cin >> testCasesNum;

    while (testCasesNum--) {
        cin >> a >> b >> c;
        if (a == b) {
            cout << c << '\n';
        }
        else if (a == c) {
            cout << b << '\n';
        }
        else {
            cout << a << '\n';
        }
    }

    return 0;
}