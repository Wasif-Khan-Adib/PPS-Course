#include <stdio.h>

int main()
{
    int x, step;

    scanf("%d", &x);

    step = x / 5;

    if (x % 5 != 0)
    {
        step = step + 1;
    }

    printf("%d\n", step);

    return 0;
}
