// problem name: Elephant
// problem link: https://codeforces.com/problemset/problem/617/A
// status: accepted

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia


#include<stdio.h>

int main(void)
{
    int distance, steps;
    scanf("%d", &distance);

    if (distance % 5 == 0) {
        steps = (distance / 5);
    }
    else {
        steps = (distance / 5) + 1;
    }
    printf("%d", steps);
    return 0;
}
