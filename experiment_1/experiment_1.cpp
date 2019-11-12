#include <stdio.h>
int main()
{
	int a[20],i,step,temp,p,test;
	for(i=0;i<=19;i++)
		{
			printf("请输入第%d个数字:",i+1);
			scanf("%d",&a[i]);
		}
	for(step=0;step<20;step++)
		{
			for(p=0;p<19;p++)
				{
					if(a[p+1]>a[p])
						{
							temp=a[p+1];
							a[p+1]=a[p];
							a[p]=temp;
						}
				}
		}
	printf("\n请输入待查找的数：");
	scanf("%d",&test);
	for(i=0;i<20;i++)
		{
			if(test==a[i])
					printf("找到！下标为%d\n",i);
			if(i==19&&a[i]!=test)
					printf("未找到！\n");
		}
	

	return 0;
}