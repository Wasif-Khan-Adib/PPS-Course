#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int result = 1;
    for(int i = 1 ; i<=N; i++)
    {
        if(i%K==0)
        {
            result = i * i;
            printf("%d\n",result);
        }
        else
        {
            printf("DIU CSE 71 Batch\n");
        }
    }

    return 0;
}
