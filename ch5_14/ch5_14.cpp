#include <stdio.h>
int main()
{
	int n,m=0,sum=0;
	printf("Please enter n\n");
	scanf("%d",&n);
	while(n!=0)
		{
			m=n%10;
			sum=sum+m;
			n=n/10;
		}
	printf("��λ����֮��Ϊ��%d\n",sum);
	return 0;
}