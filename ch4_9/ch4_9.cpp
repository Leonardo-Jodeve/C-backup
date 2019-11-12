#include <stdio.h>
int main()
{
	printf("Please enter a letter\n");
	char x;
	x=getchar();
	if(x>=65&&x<=90)
		printf("你输入了一个大写字母\n");
	else if(x>=97&&x<=122)
		printf("你输入了一个小写字母\n");
	else if(x>=48&&x<=57)
		printf("你输入了一个数字\n");
	else
		printf("你输入了其他字符\n");
	return 0;
}