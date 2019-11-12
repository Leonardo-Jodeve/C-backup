#include <stdio.h>
int main()
{
	void trans(int);
	int n;
	scanf("%d",&n);
	trans(n);
	printf("\n");
	return 0;
}

void trans(int x)
{
	if(x>=16)
		trans(x/16);
	if(x%16<10)
		printf("%d",x%16);
	else
		printf("%c",x%16-10+'A');
}