#include <stdio.h>

struct complex
{
	int real;
	int im;
};

int main()
{
	struct complex cadd(struct complex creal,struct complex cim);
	struct complex x,y,add;
	scanf("%d%d",&x.real,&x.im);
	scanf("%d%d",&y.real,&y.im);
	add=struct cadd(struct x,struct y);
	return 0;
}

struct complex cadd(struct complex creal,struct complex cim)
{
	struct complex add;
	add.im=creal.im+complex.im;
	add.real=creal.real+complex.real;
	return add;
}	

