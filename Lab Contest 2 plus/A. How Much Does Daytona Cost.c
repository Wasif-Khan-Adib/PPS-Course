#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i = 0; i<n ; i++)
        {
            scanf("%d",&a[i]);
        }
        int flag = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i]==k)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
