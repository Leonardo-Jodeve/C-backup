#include <stdio.h>
#include <string.h>
int find(char* p[],int n,char *sp)
{
	int i;
    for(i=0;i<n;i++)
	{
		if(strcmp(p[i],sp)==0)
			return 1;
	}
	return 0;
}
int main()
{
	char *a[]={"jiangwen","geyou","zhourunfa"};
	printf("%d\n",find(a,3,"geyou"));

	return 0;
}