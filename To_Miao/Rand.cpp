#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int low,high;
	char choice='1';
step:printf("请输入抽取的范围下限：");
	scanf("%d",&low);
	printf("请输入抽取的范围上限：");
	scanf("%d",&high);
	if(low>=high)
	{
		printf("\n数据输入错误，请重新输入！\n\n");
		goto step;
	}
	while(choice!='0')
	{
		system("cls");
		printf("\n        范围%d-%d,设置完成！\n\n\n",low,high);	
		printf("         抽中的数字为：%d\n\n\n",rand()%(high-low)+low);
		printf("按回车继续抽取；输入字母“r”可重设范围；输入0以退出本程序\n请输入：");
		scanf("%c",&choice);
		if(choice=='r')
		{
			printf("\n重设范围\n\n");
			goto step;
		}
		printf("\n\n");
	}
	return 0;
}