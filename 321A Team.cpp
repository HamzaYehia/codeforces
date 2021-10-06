// problem name: 231A Team
// problem link: https://codeforces.com/problemset/problem/231/A
// status: accepted

// auother: https://github.com/HamzaYehia

#include <iostream>
using namespace std;

int main()
{
    int n = 0, result = 0;
    int petya, vasya, tonya;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya == 2 || petya + vasya + tonya == 3)
            result++;
    }
    cout << result << endl;
}
