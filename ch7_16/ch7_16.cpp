#include <stdio.h>
#define N 100
int main()
{
	int a[N]={0},b[N]={0},i,j;
	for(i=0;i<N;i++)
		b[i]=1;
	for(i=0;i<N;i++)
		{
			printf("ÇëÊäÈëa[%d]£º",i+1);
			scanf("%d",&a[i]);
		}
	for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				{
					if(a[i]>a[j])
						b[i]=b[i]+1;
				}
		}
	printf("(");
	for(j=0;j<N;j++)
			printf("%d,",b[j]);	
	printf(")");
	return 0;
}