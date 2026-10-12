#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,min=INT_MAX;
    for(int i = 1;i<=t;i++)
    {
        scanf("%d",&a);
        if(a<min)
        {
            min = a;
        }
    }
    printf("%d\n",min);
    return 0;
}
