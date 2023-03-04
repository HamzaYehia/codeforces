#include <stdio.h>

int min(int a, int b, int c);

int main(void) {
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int toastsFromDrink = (k * l) / nl;
    int toastsFromLimes = c * d;
    int toastsFromSalt = p / np;

    int toasts = min(toastsFromDrink, toastsFromLimes, toastsFromSalt) / n;

    printf("%d\n", toasts);
    return 0;
}


int min(int a, int b, int c) {
    if (a <= b && a <= c) return a;
    else if (b <= a && b <= c) return b;
    else return c;
}