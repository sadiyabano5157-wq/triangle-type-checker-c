#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first number:\n");
    scanf("%d",&a);

    printf("Enter second number:\n");
    scanf("%d",&b);

    printf("Enter third number:\n");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
        {
            printf("Equilateral triangle\n");
        }
        else if(a==b || a==c || b==c)
        {
            printf("Isosceles triangle\n");
        }
        else
        {
            printf("Scalene triangle\n");
        }
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return 0;
}
