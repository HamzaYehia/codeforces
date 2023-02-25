#include <stdio.h>


int main(void) {
    int n = 0, amazingRecords = 0, lastMin = 0, lastMax = 0;

    scanf("%d", &n);

    int firstItem = 0;
    scanf("%d", &firstItem);
    lastMin = lastMax = firstItem;
    
    while (--n) {
        int num = 0;
        scanf("%d", &num);

        if (num < lastMin) {
            amazingRecords++;
            lastMin = num;
        }

        if (num > lastMax) {
            amazingRecords++;
            lastMax = num;
        }
    }

    printf("%d\n", amazingRecords);

    return 0;
}