#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    _Bool isProducingOutput = 0;
    
    scanf("%s", input);
    
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'H' || input[i] == 'Q' || input[i] == '9') {
            isProducingOutput = 1;
            break;
        }
    }

    printf((isProducingOutput) ? "YES" : "NO");
    
    return 0;
}
