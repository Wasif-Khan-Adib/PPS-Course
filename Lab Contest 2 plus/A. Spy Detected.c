#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i<t ; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n ; i++)
        {
            scanf("%d",&a[i]);
        }

        int fre[101]={0};

        for(int i = 0; i<n ; i++)
        {
            fre[a[i]]++;
        }

        for(int i = 0; i<n ; i++)
        {
            if(fre[a[i]]==1)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
