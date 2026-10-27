#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);

    int sum = 0;
    int count = 0;

    for(int i = 0; i<n ; i++)
    {
        if(a[i]%k==0)
        {
           sum = sum + a[i];
           count++;
        }
    }
    if(count>0)
    {
        double avg = (double)sum/count;
        printf("avg %.2lf\n",avg);
    }
    else
    {
        printf("0.00\n");
    }
    printf("divisible numbers: ");
    for(int i = 0; i<n ; i++)
    {
        if(a[i]%k==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
