/**
 * @problem name: Snow Footprints
 * @problem link: https://codeforces.com/contest/298/problem/A
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-13
 */


#include <stdio.h>


void snowFootprints(int n, char* str) {
    for (int i = 0; i < n; i++) {
        if (str[i] != '.') {
            if (str[i] == 'R') {
                while (str[i] == 'R') {
                    i++;
                }
                printf("%d %d", i, i + 1);
            }
            else {
                printf("%d %d", i + 1, i);
            }
            break;
        }
    }
}

int main(void) {
    int n = 0;
    char str[1000];

    scanf("%d\n%s", &n, str);

    snowFootprints(n, str);
    return 0;
}