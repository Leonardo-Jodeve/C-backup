#include "pch.h"
#include <iostream>
int main()
{
	int a, b, c, d, e,sum;
	double average;
	printf("Please enter your marks\n");
	scanf_s("%d%d%d%d%d", &a,&b,&c,&d,&e);
	sum = a + b + c + d + e;
	average = (a + b + c + d + e) / 5;
	printf("你的总分为%d\n你的平均分为%.2lf\n", sum, average);
	return 0;
}