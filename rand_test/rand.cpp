#include <stdio.h>
#include <math.h>
int main()
//α�����������(ƽ��ȡ��)
/*{
	int x,y,i=0,z;
	printf("Please enter the seed(6)\n");
	scanf("%d",&x);
	printf("How many munbers do you want\n");
	scanf("%d",&z);
	while(i<=z)
	{
		y=((x*x)/1000)%1000000;
		x=y;
		printf("random munber is:%d\n",y);
		i++;
	}
	return 0;
}
*/

//α�����version 2.0(��ƽ��ȡС��,���Ӹ��������)
{
	double x,y;
	int z,i=0;
	printf("Please enter the seed\n");
	scanf("%lf",&x);
	printf("How many random numbers do you want\n");
	scanf("%d",&z);
	while(i<=z)
	{
		y=sqrt(x)*100000000000/10;
		y=(int)y%100000000;
		if(y<=0)
			y=-y;
		printf("Your random number is:%.0lf\n",y);
		x=y*(1+sqrt(sqrt(i))*100/10);
		i++;
	}
	return 0;
}