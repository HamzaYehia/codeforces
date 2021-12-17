// problem name: Word Capitalization
// problem link: https: https://codeforces.com/problemset/problem/281/A
// status: accepted
 
// auother: https://github.com/HamzaYehia
 

#include <stdio.h>

int main(void) {
    char arr[1000];
    scanf("%s", arr);
    if (arr[0] >= 97 && arr[0] <= 122)
    {
        arr[0] -= 32;
    }
    printf("%s", arr);
    return 0;
}
