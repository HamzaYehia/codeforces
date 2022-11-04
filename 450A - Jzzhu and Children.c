#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 0, m = 0, lastChildPosition = 0, maxTimesNeeded = 0;
    
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        float inpt = 0;
        scanf("%f", &inpt);

        if (ceil(inpt / m) >= maxTimesNeeded) {
            lastChildPosition = i;
            maxTimesNeeded = ceil(inpt / m);
        }
    }

    printf("%d", lastChildPosition);
}