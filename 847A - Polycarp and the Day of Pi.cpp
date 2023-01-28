#include <iostream>

using namespace std;

int main(void) {
    string firstThirty = "3141592653589793238462643383279";

    int t = 0;
    string input = "";

    cin >> t;
    while (t--) {
        int counter = 0;
        cin >> input;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] != firstThirty[i]) break;
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
