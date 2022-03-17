// problem name: Queue at the School
// problem link: https://codeforces.com/problemset/problem/266/B
// Time complexity: O(n * t)

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia 


#include <stdio.h>

int main(void)
{
    int n, t;
    char s[50];
    scanf("%d %d\n", &n, &t);
    scanf("%s", s);
    for (int i = 0; i < t; i++)
    {
        for (int ii = 0; ii < n; ii++)
        {
            if (s[ii] == 66 && s[ii + 1] == 71)
            {
                int temp = s[ii];
                s[ii] = s[ii + 1];
                s[ii + 1] = temp;
                ii++;
            }
            continue;
        }
    }
    printf("%s", s);
}
