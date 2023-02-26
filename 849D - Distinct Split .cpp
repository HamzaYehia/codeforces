#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


void solve() {
    set<char> distinctChars;

    int n = 0;
    string input = "";
    cin >> n >> input;

    int distinctPrefix[n] = { 0 };
    int distinctPrefixReversed[n] = { 0 };

    for (int i = 0; i < n; i++) {
        distinctChars.insert(input[i]);
        distinctPrefix[i] = distinctChars.size();
    }

    distinctChars.clear();

    for (int i = n - 1; i >= 0; i--) {
        distinctChars.insert(input[i]);
        distinctPrefixReversed[i] = distinctChars.size();
    }

    int maxDist = 0;
    for (int i = 0; i < n - 1; i++) {
        maxDist = max(maxDist, distinctPrefix[i] + distinctPrefixReversed[i + 1]);
    }

    cout << maxDist << endl;
}


int main(void) {
    int t = 0;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}