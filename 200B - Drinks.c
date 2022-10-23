#include <stdio.h>

int main(int argc, char const* argv[]) {
    int n = 0;

    scanf("%d", &n);

    int percentages = 0;

    for (int i = 0; i < n; i++) {
        int inpt;
        scanf("%d", &inpt);

        percentages += inpt;
    }

    n *= 100;

    double result = (percentages * 100.0) / n;
    printf("%lf", result);
    return 0;
}
