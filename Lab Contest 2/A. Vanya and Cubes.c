#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int level = 0;
    int cube = 0;
    int total = 0;

    for(int i = 1; i<=n; i++)
    {
        cube = cube + i;

        if(total + cube <= n)
        {
            total = total + cube;
            level++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",level);
    return 0;
}
