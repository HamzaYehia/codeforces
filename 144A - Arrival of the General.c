#include<stdio.h>

int main(void) {
    int n, soldiers[100], minIndex = 0, maxIndex = 0,
        steps = 0, lastSoldier = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &soldiers[i]);
    }
    
    for (int i = 1; i < n; i++) {
        if (soldiers[i] <= soldiers[minIndex]) minIndex = i;

        if (soldiers[i] > soldiers[maxIndex]) maxIndex = i;
    }

    if (minIndex < maxIndex) maxIndex--;

    lastSoldier = n - 1;
    
    steps = (lastSoldier - minIndex) + (maxIndex - 0);

    printf("%d\n", steps);
}
