#include <stdio.h>
int main()
{
	int slength(char *a);
	char a[150];
	int size;
	scanf("%s",&a);
	size=slength(a);
	printf("%d\n",size);
	return 0;
}

int slength(char *ptr)
{
	int i=0;
	while(*ptr!='\0')
		{
			i++;
			ptr++;
		}
	return i;
}