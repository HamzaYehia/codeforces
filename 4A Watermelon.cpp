// problem name: 4A Watermelon
// problem link: https://codeforces.com/problemset/problem/4/A
// status: accepted

// author: https://github.com/HamzaYehia


#include <iostream>
using namespace std;

int main()
{
    int w = 0;
    cin >> w;
    string output = (w <= 2 || w % 2) ? "NO" : "YES";
    cout << output << endl;
    return 0;
}
