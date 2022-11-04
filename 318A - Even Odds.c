#include <stdio.h>

int main(void) {
    long long range, position;
    scanf("%lld %lld", &range, &position);

    long long midPoint = (range + 1) / 2;

    if (position <= midPoint) {
        printf("%lld", ((position - 1) * 2) + 1);
    }
    else {
        printf("%lld", (position - midPoint) * 2);
    }

    return 0;
}
