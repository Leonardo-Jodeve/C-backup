#include <stdio.h>
int main()
{
	int find(int *p,int *ptr[]);
	int a[]={1,2,3,4,5,6,7,8,9};    //�����ʼ��
	int x,i,*ptr[9],*ptrx=&x;          //����ָ�������ҪѰ�ҵ�����ָ��
	scanf("%d",&x);
	for(i=0;i<9;i++)
		ptr[i]=&a[i];               //��ָ�����鸳��ֵ
	printf("%d\n",find(ptrx,ptr));
	return 0;
}

int find(int *p,int *ptr[])
{
	int i,x,num=-1;
	x=*p;
	for(i=0;i<9;i++)
		{
			if(x==*ptr[i])
				num=i;
		}
	return num;
}