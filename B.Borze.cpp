#include <iostream>


void decodeBorze(std::string str) {
    std::string decodedNumber = "";

    for (int i = 0; i < str.length(); i++) {

        if (str[i] == '.') decodedNumber += '0';

        if (str[i] == '-' && str[i + 1] == '.') {
            decodedNumber += '1';
            i++;
        }

        if (str[i] == '-' && str[i + 1] == '-') {
            decodedNumber += '2';
            i++;
        }
    }

    std::cout << decodedNumber << std::endl;
}

int main() {
    std::string Borze;
    std::cin >> Borze;

    decodeBorze(Borze);
    return 0;
}
