#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int count = 0;
        int max_count = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                count++;
            }
            else
            {
                if(count > max_count)
                {
                    max_count = count;
                }

                count = 0; // notun kore abar count er value zero kore dilam
            }
        }

        if(count > max_count)
        {
            max_count = count;
        }

        printf("%d\n", max_count);
    }

    return 0;
}

