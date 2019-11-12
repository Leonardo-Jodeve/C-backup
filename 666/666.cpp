#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<300000000;i++)
	{
		printf("6");
		if(i%3==0)
			printf(" ");
		if(i%36==0)
			printf("\n");
	}
	return 0;
}