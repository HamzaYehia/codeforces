#include <stdio.h>
#include <iso646.h>

int k, l, m, n, d;

int damagedDragons(void) {
    int undamagedDragons = 0;

    for (int i = 1; i <= d; i++) {
        if (i % k and i % l and i % m and i % n) {
            undamagedDragons += 1;
        }
    }

    return (d - undamagedDragons);
}

int main(void) {

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    printf("%d\n", damagedDragons());

    return 0;
}
