#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int low,high;
	char choice='1';
step:printf("�������ȡ�ķ�Χ���ޣ�");
	scanf("%d",&low);
	printf("�������ȡ�ķ�Χ���ޣ�");
	scanf("%d",&high);
	if(low>=high)
	{
		printf("\n��������������������룡\n\n");
		goto step;
	}
	while(choice!='0')
	{
		system("cls");
		printf("\n        ��Χ%d-%d,������ɣ�\n\n\n",low,high);	
		printf("         ���е�����Ϊ��%d\n\n\n",rand()%(high-low)+low);
		printf("���س�������ȡ��������ĸ��r�������跶Χ������0���˳�������\n�����룺");
		scanf("%c",&choice);
		if(choice=='r')
		{
			printf("\n���跶Χ\n\n");
			goto step;
		}
		printf("\n\n");
	}
	return 0;
}