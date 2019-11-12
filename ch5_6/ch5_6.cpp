#include <stdio.h>
int main()
{
	double e=1.0,fact=1.0;
	int i=1;
	while(1.0/fact>1e-6)
	{
		fact=fact*i;
		i++;
		e=e+(1.0/fact);
	}
	printf("%lf\n",e);
	return 0;
}