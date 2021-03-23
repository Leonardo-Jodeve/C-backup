//
// Created by Leonardo Jodeve on 2021/3/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    if(b == 0)
        return INFINITY;
    return a/b;
}

int (*CalculatorFunction)(int a, int b);



int (*CalFunc[4])(int a, int b);