#include <stdio.h>
int main()
{
	char a[10],i;
	for(i=0;i<10;i++)
		a[i]=getchar();
	for(i=9;i>=0;i--)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}