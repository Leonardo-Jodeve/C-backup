#include <stdio.h>
int main()
{
	int a[20],i,step,temp,p,test;
	for(i=0;i<=19;i++)
		{
			printf("�������%d������:",i+1);
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
	printf("\n����������ҵ�����");
	scanf("%d",&test);
	for(i=0;i<20;i++)
		{
			if(test==a[i])
					printf("�ҵ����±�Ϊ%d\n",i);
			if(i==19&&a[i]!=test)
					printf("δ�ҵ���\n");
		}
	

	return 0;
}