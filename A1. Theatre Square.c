#include <stdio.h>
#include <math.h>


int main(void) {

    long long n, m, a;

    scanf("%lld %lld %lld", &n, &m, &a);

    long long x = (m % a == 0) ? m / a : (m / a) + 1;
    long long  y = (n % a == 0) ? n / a : (n / a) + 1;

    printf("%lld\n", x * y);

    return 0;
}
