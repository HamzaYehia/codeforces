// problem name: 71A Way Too Long Words
// problem link: https://codeforces.com/contest/71/problem/A
// status: accepted

// author: https://github.com/HamzaYehia


#include <iostream>
using namespace std;

int main()
{
    int n;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.size() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        else
            cout << word << endl;
    }
}
