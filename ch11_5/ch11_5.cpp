#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int a[10],i,j,temp;
	if((fp=fopen("DATA.txt","w"))==NULL)
	{
		printf("Failed to open!");
		goto end;
	}
	printf("Success!\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数字:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
				if(a[j-1]<a[j])
				{
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
		}
	}
	for(i=0;i<10;i++)
	{
		fprintf(fp,"%d\n",a[i]);
	}
	fclose(fp);
end:return 0;
}