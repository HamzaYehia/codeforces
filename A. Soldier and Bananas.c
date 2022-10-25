#include <stdio.h>


int k, n, w;

int costOfAllBananas(void) {
    int costOfallBananas = 0;

    for (int i = 1; i <= w; i++) {
        costOfallBananas += (i * k);
    }

    return costOfallBananas;
}
int main(void) {

    scanf("%d %d %d", &k, &n, &w);

    int cost = costOfAllBananas();
    int mustBorrow = (n < cost) ? cost - n : 0;

    printf("%d\n", mustBorrow);

    return 0;
}
