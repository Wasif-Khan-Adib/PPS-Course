
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int a[3];

        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
        }

        int fre[10] = {0};

        for(int j = 0; j < 3; j++)
        {
            fre[a[j]]++;
        }

        for(int j = 0; j < 3; j++)
        {
            if(fre[a[j]] == 1)
            {
                printf("%d\n", a[j]);
                break;
            }
        }
    }

    return 0;
}
