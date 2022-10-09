/**
 * @problem name: C - Compare
 * @problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-Oct-09
 */



#include <iostream>

using namespace std;


void compare(string str1, string str2);

int main(void) {

    string str1, str2;
    cin >> str1 >> str2;

    compare(str1, str2);

    return 0;
}


void compare(string str1, string str2) {
    int greaterLength = (str1.length() >= str2.length()) ?
        str1.length() : str2.length();

    for (int i = 0; i < greaterLength; i++) {
        if (i >= str1.length() || str1[i] < str2[i]) {
            cout << str1;
            return;
        }

        if (i >= str2.length() || str2[i] < str1[i]) {
            cout << str2;
            return;
        }
    }

    cout << str1;
}