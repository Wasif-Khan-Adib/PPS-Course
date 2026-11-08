#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row,col;

    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=5; j++)
        {
            scanf("%d",&n);

            if(n==1)
            {
                row = i;
                col = j;
            }
        }
    }

    int ans = abs(row-3)+ abs(col-3); // targeted position 3X3

    printf("%d\n",ans);

    return 0;

}
