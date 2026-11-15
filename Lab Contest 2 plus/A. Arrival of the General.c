#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_value = a[0];
    int min_value = a[0];

    int max_index = 0;
    int min_index = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > max_value)
        {
            max_value = a[i];
            max_index = i;
        }

        if(a[i] <= min_value)
        {
            min_value = a[i];
            min_index = i;
        }
    }

    int swaps = max_index + (n - 1 - min_index);

    if(max_index > min_index)
    {
        swaps--;
    }

    printf("%d\n", swaps);

    return 0;
}
