#include<stdio.h>
int main()
{
    int w,a,s,i,f;
    scanf("%d %d %d %d %d",&w,&a,&s,&i,&f);

    int max,sec;

    max = w;
    sec = a;

    if(a>max)
    {
        sec = max;
        max = a;
    }
    if(s>max)
    {
        sec = max;
        max = s;
    }
    else if (s>sec)
    {
        sec = s;
    }
    if(i>max)
    {
        sec = max;
        max = i;
    }
    else if(i>sec)
    {
        sec = i;
    }
    if (f>max)
    {
        sec = max;
        max = f;
    }
    else if(f>sec)
    {
        sec = f;
    }

    printf("%d\n",sec);

    return 0;


}
