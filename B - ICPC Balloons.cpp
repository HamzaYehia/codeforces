#include <iostream>
#include <unordered_set>


int main(void) {
    int t = 0;
    std::cin >> t;

    while (t--) {
        int n = 0, numberOfBalloons = 0;
        std::string s = "";
        std::unordered_set<char> sChars;

        std::cin >> n >> s;

        for (char i : s) {
            if (sChars.find(i) == sChars.end()) {
                numberOfBalloons += 2;

                sChars.insert(i);
            }
            else {
                numberOfBalloons += 1;
            }

        }

        std::cout << numberOfBalloons << '\n';
    }

    return 0;
}