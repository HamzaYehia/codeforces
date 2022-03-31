/**
 * @problem name: Beautiful Year
 * @problem link: https://codeforces.com/problemset/problem/271/A
 * @solution status: accepted
 * @solution time complexity: Linear O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-03-31
 */



#include <stdio.h>


int main(void) {
    int input, output,
        first_digit, second_digit,
        third_digit, fourth_digit;

    scanf("%d", &input);

    for (int i = input; i < 9012; i++) {
        input++;
        output = input;

        first_digit = input % 10;
        input = input / 10;
        second_digit = input % 10;
        input = input / 10;
        third_digit = input % 10;
        input = input / 10;
        fourth_digit = input % 10;

        if (first_digit != second_digit && first_digit != third_digit &&
            first_digit != fourth_digit && second_digit != third_digit &&
            second_digit != fourth_digit && third_digit != fourth_digit)
        {
            printf("%d\n", output);
            break;
        }
        // else: reset 'input' variable to its original value
        input = output;
    }
    return 0;
}
