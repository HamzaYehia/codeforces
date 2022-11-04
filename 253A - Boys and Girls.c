#include <stdio.h>


int main(void) {

    int n = 0, m = 0;

    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");

    fscanf(input, "%d %d", &n, &m);

    if (n >= m) {
        for (int i = 1; i <= (m + n); i++) {
            if (i <= n) putc('B', output);
            if (i <= m) putc('G', output);
        }
    }
    else {
        for (int i = 1; i <= (m + n); i++) {
            if (i <= m) putc('G', output);
            if (i <= n) putc('B', output);
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}