#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int sum = 3;
    for(int i =x+1;i<y;i++)
    {
        if(i%2!=0)
        {
           sum = sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}
