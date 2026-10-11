#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    {
        if(num>=80 && num<=100)
            printf("A+\n");

        else if(num>=75)
            printf("A\n");

        else if(num>=70)
            printf("A-\n");

        else if(num>=65)
            printf("B+\n");

        else if(num>=60)
            printf("B\n");

        else if(num>=55)
            printf("B-\n");

        else if(num>=50)
            printf("C+\n");

        else if(num>=45)
            printf("C\n");

        else if(num>=40)
            printf("D\n");

        else if(num>=0)
            printf("F\n");
    }
    return 0;
}
