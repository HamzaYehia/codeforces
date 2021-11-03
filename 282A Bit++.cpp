// problem name: A. Bit++
// problem link: https://codeforces.com/problemset/problem/282/A
// status: accepted
// auother: https://github.com/HamzaYehia


#include <iostream>
#include <string>

using namespace std;
int main() {
    int x = 0;
    int statments;
    string inpt;
    cin >> statments;
    for (int i = 0; i < statments; i++)
    {
        cin >> inpt;
        if (inpt == "X++" || inpt == "++X") {
            x++;
        } else if (inpt == "X--" || inpt == "--X") {
            x--;
        } else
            return -1;
    }
    cout << x;
}
