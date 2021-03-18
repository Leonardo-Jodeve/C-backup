//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>

int Factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n*Factorial(n-1);
}
//0!=1,递归调用得到阶乘

//int main()
//{
//    int i=0;
//    scanf("%d",&i);
//    printf("%d",Factorial(i));
//}