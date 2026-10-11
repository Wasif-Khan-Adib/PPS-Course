#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int mul = a*b;
    int possible_way = mul / 2;
    printf("%d\n",possible_way);
    return 0;
}
