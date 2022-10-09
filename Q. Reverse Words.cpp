/**
 * @problem name: Q. Reverse Words
 * @problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
 *
 * @time complexity: O(2n)
 * @space complexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-Oct-09
 */


#include <iostream>
#include <stack>

using namespace std;


void reverseWords(string str);

int main(void) {

    string str;
    getline(std::cin >> std::ws, str);

    reverseWords(str);

    return 0;
}


void reverseWords(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            st.push(str[i]);
        }
        else {
            while (st.empty() == false) {
                putchar(st.top());
                st.pop();
            }
            putchar(' ');
        }
    }

    // print last word
    while (st.empty() == false) {
        putchar(st.top());
        st.pop();
    }
}