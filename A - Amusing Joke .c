#include <stdio.h>
#include <string.h>


int main(void) {
    char a[100], b[100], c[100];
    scanf("%s %s %s", a, b, c);

    int frequencyArrayOfNames[26] = { 0 };
    int frequencyArrayOfPile[26] = { 0 };

    for (int i = 0; i < strlen(a); i++) frequencyArrayOfNames[a[i] - 65] ++;
    for (int i = 0; i < strlen(b); i++) frequencyArrayOfNames[b[i] - 65] ++;

    for (int i = 0; i < strlen(c); i++) frequencyArrayOfPile[c[i] - 65] ++;

    _Bool yesOrNo = 1;
    
    for (int i = 0; i < 26; i++) {
        if (frequencyArrayOfNames[i] != frequencyArrayOfPile[i]) {
            yesOrNo = 0;
            break;
        }
    }

    printf("%s\n", (yesOrNo)? "YES" : "NO");

    return 0;
}
