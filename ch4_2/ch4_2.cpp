#include <stdio.h>
int main()
{
	int x;
	printf("Please input an INT number 'x':");
	scanf("%d",&x);
	if(x%2)
		printf("x为奇数\n");
	else
		printf("x为偶数\n");
	return 0;
}