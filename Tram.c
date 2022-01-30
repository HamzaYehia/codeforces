// problem name: Tram
// problem link: https://codeforces.com/problemset/problem/116/A
// status: accepted
 
// auother: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia
 

#include <stdio.h>

int main(void)
{
    int n, enter = 0, exit = 0, capacity = 0, maxCapacity = -1;
    scanf("%d", &n);
    
    // input
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &exit, &enter);
        capacity-= exit;
        capacity+= enter;
        if (capacity > maxCapacity)
        {
            maxCapacity = capacity;
        }
    }
    printf("%d\n",maxCapacity);
    return 0;
}
