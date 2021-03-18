//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>
#include <math.h>

extern double add(double ,double );
extern double sub(double ,double );
extern double mul(double ,double );
extern double div(double ,double );


void Calculator()
{
    double a;
    double b;
    char process;
    printf("Please enter the first number a:");
    scanf("%lf",&a);
    printf("Please enter the second number b:");
    scanf("%lf",&b);
    printf("Please enter the process,(only +-*/ supported)");
    scanf("%c",&process);

    switch (process)
    {
        case '+': printf("a+b=%lf",add(a,b));
            break;
        case '-': printf("a-b=%lf",sub(a,b));
            break;
        case '*': printf("a*b=%lf",mul(a,b));
            break;
        case '/':
            {
                if(b == 0)
                    printf("Can't divide by 0!\n");
                else
                    printf("a/b=%lf",div(a,b));
            }
            break;
        default:printf("ERROR!\n");
    }
}

double add(double a, double b)
{
    return a+b;
}

double sub(double a, double b)
{
    return a-b;
}

double mul(double a, double b)
{
    return a*b;
}

double div(double a, double b)
{
    if(b == 0)
        return INFINITY;
    return a/b;
}