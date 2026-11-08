#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int time = 0;
    int problem = 0;
    for(int i = 1;i<=n;i++)
    {
        time = time + (5 * i);

        if(time <= 240-k)
        {
            problem++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",problem);
    return 0;
}
