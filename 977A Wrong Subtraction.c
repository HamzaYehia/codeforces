// problem name: Wrong Subtraction
// problem link: https://codeforces.com/problemset/problem/977/A
// status: accepted

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia


#include<stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        /* (n % 10) figure out
        the value of the last digit of n */

        if ((n % 10) != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }

    printf("%d", n);
    return 0;
}
