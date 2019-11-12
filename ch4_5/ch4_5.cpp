#include <stdio.h>
int main()
{
	double a,b,c;
	printf("Please input a,b,c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>b)
		if(a>c)
			printf("max=a\n");
		else
			printf("max=c\n");
	else
		if(b>c)
			printf("max=b\n");
		else
			printf("max=c\n");
	return 0;
}