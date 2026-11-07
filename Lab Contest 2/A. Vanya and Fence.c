#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int a[n];
    int count = 0;
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);


        if(a[i] <= h)
        {
            count++;
        }
        else if(a[i] > h)
        {
            count = count + 2;
        }
    }
    printf("%d\n",count);
    return 0;
}
