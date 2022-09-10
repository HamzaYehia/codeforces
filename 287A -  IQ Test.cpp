#include <iostream>
#include <string>


std::string Input[4];

bool TestCell(int i, int j) {
    if (i + 1 >= 4 || j + 1 >= 4) return false;

    return (Input[i][j] == Input[i + 1][j] &&
        Input[i][j] == Input[i][j + 1] &&
        Input[i][j] == Input[i + 1][j + 1]);
}

bool TestAllCells() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (TestCell(i, j)) {
                return true;
            }
        }
    }

    return false;
}

int main(void) {

    // scan input
    for (int i = 0; i < 4; i++) {
        std::cin >> Input[i];
    }

    bool TestPassed = TestAllCells();

    if (TestPassed) {
        std::cout << "YES";
        return 0;
    }

    // flip a char
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            char OriginalChar = Input[i][j];

            if (Input[i][j] == '#') Input[i][j] = '.';
            else if (Input[i][j] == '.') Input[i][j] = '#';

            // test after flipping
            if (TestAllCells()) {
                TestPassed = true;
            }

            // return the flipped char to its origin
            Input[i][j] = OriginalChar;
        }
    }

    std::cout << (TestPassed ? "YES" : "NO");

    return 0;
}