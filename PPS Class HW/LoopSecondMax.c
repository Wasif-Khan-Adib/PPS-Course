#include<stdio.h>
int main()
{
    int num;
    int max, second;
    scanf("%d %d",&max,&second);
    if(second > max)
    {
        int temp = max;
        max = second;
        second = temp;
    }
    for(int i = 3;i<=5;i++)
    {
        scanf("%d",&num);

        if(num>max)
        {
            second = max;
            max = num;
        }
        else if(num > second)
        {
            second = num;
        }
    }
    printf("%d\n",second);
    return 0;
}
