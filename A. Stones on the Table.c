// problem name: Stones on the Table
// problem link: https://codeforces.com/problemset/problem/266/A
// status: accepted

// author: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia 

#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);
    char arr[n];
    scanf("%s", arr);
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            counter++;
        }
    }
    printf("%d", counter);

}

