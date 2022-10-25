#include <iostream>
#include <algorithm>

int main(void) {
    std::string inputStr, finalStr;
    std::cin >> inputStr;

    std::transform(inputStr.begin(), inputStr.end(), inputStr.begin(), tolower);

    for (char i : inputStr) {
        if (i != 'a' and i != 'e' and i != 'i' and
            i != 'o' and i != 'u' and i != 'y') {
            finalStr += '.';
            finalStr += i;
        }
    }

    std::cout << finalStr << std::endl;

    return 0;
}
