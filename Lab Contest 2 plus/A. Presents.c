#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int answer[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        answer[a[i] - 1] = i + 1; //a[i] -> present frnd kake gift dicche, a[i]-1 -> sei frnd er index number, i+1 -> je bondhu gift diyese tar num
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}
