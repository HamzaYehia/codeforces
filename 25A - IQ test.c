#include <stdio.h>


int main(void) {
    int n = 0, evens = 0, lastEven = 0, odds = 0, lastOdd = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = 0;
        scanf("%d", &num);

        if (num % 2 == 0) {
            evens++;
            lastEven = i;
        }
        else {
            odds++;
            lastOdd = i;
        }
    }

    printf("%d", (evens == 1) ? lastEven : lastOdd);
    return 0;
}