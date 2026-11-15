#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        int check = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] - a[i - 1] > 1)
            {
                check = 0;
                break;
            }
        }

        if(check == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
