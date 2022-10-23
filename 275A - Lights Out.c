#include <stdio.h>


int grid[3][3] = { 0 };


void takeInput(void);
void printOutput(void);

void increaseCells(int i, int j, int cellValue);


int main(void) {
    takeInput();
    printOutput();

    return 0;
}


void increaseCells(int i, int j, int cellValue) {
    grid[i][j] += cellValue;

    if (i + 1 < 3) grid[i + 1][j] += cellValue;
    if (i - 1 >= 0) grid[i - 1][j] += cellValue;

    if (j + 1 < 3) grid[i][j + 1] += cellValue;
    if (j - 1 >= 0) grid[i][j - 1] += cellValue;
}

void takeInput(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            int cellValue = 0;
            scanf("%d", &cellValue);
            increaseCells(i, j, cellValue);
        }

    }
}

void printOutput(void) {
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            (grid[i][j] % 2 == 0) ? putchar('1') : putchar('0');
        }

        putchar('\n');

    }
}
