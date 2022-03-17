// problem name: Queue at the School
// problem link: https://codeforces.com/problemset/problem/110/A
// Time complexity: Linear

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia 



#include <stdio.h>

int main(void) {
    long long int n, iterator;
    int digit, counter = 0;

    scanf("%lld", &n);
    iterator = n;
    for (int i = 0; i < iterator; i++) {
        digit = n % 10;
        n = n / 10;

        if (digit == 4 || digit == 7) {
            counter++;
        }

        if (n == 0) {
            break;
        }
    }

    if (counter == 4 || counter == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}