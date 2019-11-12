#include <stdio.h>
int main()
{
	int a[20],i,step,temp,t,p;
	for(i=0;i<=19;i++)
		a[i]=i;
	for(step=1;step<=20;step++)
		{
			for(p=0;p<=18;p++)
				{
					if(a[p+1]>a[p])
						{
							temp=a[p+1];
							a[p+1]=a[p];
							a[p]=temp;
						}
				}
		}
	for(t=0;t<=19;t++)
		printf("%d\n",a[t]);
	return 0;
}