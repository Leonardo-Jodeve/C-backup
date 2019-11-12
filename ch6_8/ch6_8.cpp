#include <stdio.h>
void fun()
{
	char c;
	if((c=getchar())!='\n')
		fun();
	putchar(c);
}
int main()
{
	fun();
	return 0;
}