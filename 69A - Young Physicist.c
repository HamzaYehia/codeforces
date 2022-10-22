#include <stdio.h>

int main(void) {
    int n = 0, x = 0, y = 0, z = 0;
    scanf("%d", &n);

    while (n--) {
        int xValue, yValue, zValue;
        scanf("%d %d %d", &xValue, &yValue, &zValue);

        x += xValue;
        y += yValue;
        z += zValue;
    }

    (x || y || z) ? printf("NO\n") : printf("YES\n");

    return 0;
}
