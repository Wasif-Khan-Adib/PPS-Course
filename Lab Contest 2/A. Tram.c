#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int total = 0;
    int present = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        present= present - a;
        present = present + b;

        if(present > total)
        {
            total = present;
        }
    }
    printf("%d\n",total);
    return 0;
}
