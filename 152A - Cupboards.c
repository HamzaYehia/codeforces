#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int leftZeros = 0, leftOnes = 0, rightZeros = 0, rightOnes = 0;

    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int left = -1, right = -1;
        scanf("%d %d", &left, &right);

        (left == 0) ? leftZeros++ : leftOnes++;
        (right == 0) ? rightZeros++ : rightOnes++;
    }

    int result = 0;

    result += (leftZeros < leftOnes) ? leftZeros : leftOnes;
    result += (rightZeros < rightOnes) ? rightZeros : rightOnes;

    printf("%d\n", result);
    return 0;
}
