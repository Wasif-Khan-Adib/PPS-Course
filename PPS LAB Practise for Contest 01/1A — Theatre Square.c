#include <stdio.h>

int main()
{
    long long n, m, a;
    long long x, y, total;

    scanf("%lld %lld %lld", &n, &m, &a);

    x = (n + a - 1) / a;
    y = (m + a - 1) / a;

    total = x * y;

    printf("%lld\n", total);

    return 0;
}
