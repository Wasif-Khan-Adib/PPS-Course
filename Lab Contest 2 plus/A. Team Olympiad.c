#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int programming[5005];
    int mathematics[5005];
    int sports[5005];

    int programming_count = 0;
    int mathematics_count = 0;
    int sports_count = 0;

    for(int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if(x == 1)
        {
            programming[programming_count] = i;
            programming_count++;
        }
        else if(x == 2)
        {
            mathematics[mathematics_count] = i;
            mathematics_count++;
        }
        else if(x == 3)
        {
            sports[sports_count] = i;
            sports_count++;
        }
    }

    int teams = programming_count;

    if(mathematics_count < teams)
    {
        teams = mathematics_count;
    }

    if(sports_count < teams)
    {
        teams = sports_count;
    }

    printf("%d\n", teams);

    for(int i = 0; i < teams; i++)
    {
        printf("%d %d %d\n",
               programming[i],
               mathematics[i],
               sports[i]);
    }

    return 0;
}
