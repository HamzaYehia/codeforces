#include <stdio.h>

int main(void) {

    int n = 0, s = 0, result = 0;
    int groups[5] = { 0 };

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &s);
        groups[s] += 1;
    }

    result = groups[4] + groups[3] + (groups[2] / 2);

    groups[1] -= groups[3];


    if (groups[2] % 2 == 1) {
        groups[1] -= 2;
        result += 1;
    }

    if (groups[1] > 0) result += (groups[1] + 3) / 4;

    printf("%d\n", result);

    return 0;
}
