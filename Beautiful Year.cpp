#include <iostream>
using namespace std;

int main(void) {
    int input = 0, difference = 0;
    scanf("%d", &input);

    input++;

    for (int i = input; i < 9013; i++) {

        if (input <= 1000) {
            break;
        }
        string input_as_str = to_string(input);
        for (int j = 0; j < 4; j++) {

            for (int k = j + 1; k < 4; k++) {
                if (input_as_str[j] != input_as_str[k]) {
                    difference++;
                }
            }
        }

        if (difference == 6) {
            printf("%d\n", input);
            break;
        }
        else {
            difference = 0;
            input++;
        }

    }
    return 0;
}
