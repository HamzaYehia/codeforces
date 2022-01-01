// problem name: Bear and Big Brother
// problem link: https://codeforces.com/problemset/problem/791/A
// status: accepted

// auother: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia

#include<stdio.h>

int main(void)
{
    int limak, bob, counter = 0;
    scanf("%d%d", &limak, &bob);
    for(int i = 0; i < 10; i++)
    {
        limak *= 3;
        bob *= 2;
        counter++;
        if (limak > bob)
        {
            break;
        }
    }
    printf("%d", counter);
}
