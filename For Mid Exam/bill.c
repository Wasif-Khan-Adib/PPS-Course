#include<stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit);
    int total = 0;
    if(unit >= 0 && unit <= 100)
    {
        total = unit * 5 ;
    }
    else if(unit <= 200)
    {
        total = (100*5)+((unit-100)*7);
    }
    else
    {
        total = (100 * 5) + (100 * 7) + ((unit - 200)*10);
    }
    printf("%d\n",total);
}
