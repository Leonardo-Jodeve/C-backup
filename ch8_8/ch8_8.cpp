#include <stdio.h>
int main()
{
	int a[4][4],b[4][4],i,j;
	int *ptr=&a[0][0],*bb;
	int *swap(int *ptr);
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
				scanf("%d",&a[i][j]);//赋初值
		}
	bb=swap(ptr);
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				b[i][j]=*bb;
				bb++;
			}
		}
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",b[i][j]);//打印变换过的数组
			printf("\n");
		}
	return 0;
}

int* swap(int *ptr)
{
	int sort[4][4],x,y;
	int *s=&sort[0][0];
	for(x=0;x<4;x++)
	{	
		for(y=0;y<4;y++)
		{
			sort[y][x]=*ptr;
			ptr++;
		}
	}
	return s;
}