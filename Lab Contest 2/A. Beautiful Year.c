#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int num = n+1; ;num++)
    {
        int a = num / 1000; //1987 // 1
        int b = (num / 100)%10; // 19 //9
        int c = (num / 10)%10; //198 //8
        int d = num % 10; // 7

        if(a != b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d\n",num);
            break;
        }
    }
    return 0;
}
