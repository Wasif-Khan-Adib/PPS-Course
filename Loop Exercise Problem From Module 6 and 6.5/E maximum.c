#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,max=INT_MIN;
    for(int i = 1;i<=t;i++)
    {
       scanf("%d",&a);
       if(a>max)
       {
           max = a;
       }

    }
    printf("%d",max);
    return 0;
}
