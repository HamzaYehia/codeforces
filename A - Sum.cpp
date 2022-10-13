#include <iostream>


std::string sumOfOtherTwo(int a, int b, int c) {
    if (a == (b + c)) return "YES";
    if (b == (a + c)) return "YES";
    if (c == (a + b)) return "YES";

    return "NO";
}

int main() {
    int t = 0; // number of test cases
    std::cin >> t;

    int inputs[t * 3];

    for (int i = 0; i < t * 3; i += 3) {
        std::cin >> inputs[i] >> inputs[i + 1] >> inputs[i + 2];
    }

    for (int i = 0; i < t * 3; i += 3) {
        std::cout << sumOfOtherTwo(inputs[i], inputs[i + 1], inputs[i + 2]) <<
            std::endl;
    }
    return 0;
}
