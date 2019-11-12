#include <stdio.h>
int main()
{
	double a;
	step1:printf("Please input a:");
	scanf("%lf",&a);
	do
	{
		if((int)a%2)
			{
				a=a*3+1;
				printf("%.0lf\n",a);
			}
		else
			{
				a=a/2;
				printf("%.0lf\n",a);
			}
	}while(a!=1);
	goto step1;
	return 0;
}
/*{
	int a;
	for(a=1000;a<=9999;a++)
		{
			if(a==((a/100)*(a/100)+(a%100)*(a%100)))
				printf("%d\n",a);
			else
			;
		}
	return 0;
}*/