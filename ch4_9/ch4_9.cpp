#include <stdio.h>
int main()
{
	printf("Please enter a letter\n");
	char x;
	x=getchar();
	if(x>=65&&x<=90)
		printf("��������һ����д��ĸ\n");
	else if(x>=97&&x<=122)
		printf("��������һ��Сд��ĸ\n");
	else if(x>=48&&x<=57)
		printf("��������һ������\n");
	else
		printf("�������������ַ�\n");
	return 0;
}