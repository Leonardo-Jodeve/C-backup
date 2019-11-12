#include <stdio.h>
int main()
{
	int x,y;
	printf("Please input x,y\n");
	scanf("%d%d",&x,&y);
	if(x>y)
		printf("x-y=%d\n",x-y);
	else
		printf("y-x=%d\n",y-x);
	return 0;
}