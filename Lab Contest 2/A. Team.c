#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count = 0;

    for(int i = 1 ; i<=n ; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int sum = a+b+c;

        if(sum >= 2)
        {
             count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
