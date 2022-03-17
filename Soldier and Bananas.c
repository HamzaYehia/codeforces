// problem name: Soldier and Bananas
// problem link: https://codeforces.com/problemset/problem/546/A
// status: accepted

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia


#include<stdio.h>

int main(void)
{
    /* k = the cost of the first banana, n = number of dollars the soldier has,
       w = number of bananas he wants. */

    int k, n, w, result = 0;
    scanf("%d %d %d", &k, &n, &w);

    /* we will need this temp variable tp reset k to its origial value
       while we are multipling in the for loop */

    int temp = k;

    for (int i = 1; i <= w; i++) {
        k *= i;
        result += k;
        k = temp;
    }

    /* if the mony he will pay is more than what he have he will borrow the rest,
       if the money he will pay is less than or equal to what he have then
       he won't have to borrow */

    if (result > n) {
        result -= n;
        printf("%d", result);
    }
    else
        printf("%d", 0);

    return 0;
}
