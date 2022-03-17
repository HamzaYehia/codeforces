// problem name: Translation
// problem link: https://codeforces.com/problemset/problem/41/A

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia 


#include <stdio.h>
#include <string.h>


// Implementation of Stack (Last in First Out)

char stack[101];
int lastMember = 0;

void push(char member) {
    if (lastMember == strlen(stack)) {
        return;
    }
    stack[lastMember] = member;
    lastMember++;
}

char top() {
    lastMember--;
    if (lastMember < 0) {
        return '0';
    }
    else {
        return stack[lastMember];
    }
}

// Problem Solution:

int main(void) {

    char t[101];

    scanf("%s %s", stack, t);

    lastMember = strlen(stack);
    int counter = 0;

    if (strlen(stack) == strlen(t)) {
        for (int i = 0; i < strlen(stack); i++) {
            if (top() == t[i]) {
                counter += 1;
            }
            else {
                break;
            }
        }
    }

    if (counter == strlen(t)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
