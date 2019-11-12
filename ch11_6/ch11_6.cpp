#include <stdio.h>
int main()
{
	FILE *file1,*file2,*compile;
	int a;
	if((file1=fopen("file1.txt","r"))==NULL)
	{
		printf("Fail to open file 1 !\n");
		goto end;
	}
	printf("Open file 1 successfully\n");
	if((file2=fopen("file2.txt","r"))==NULL)
	{
		printf("Fail to open file 2 !\n");
		goto end;
	}
	printf("Open file 2 successfully\n");
	if((compile=fopen("compile.txt","w"))==NULL)
	{
		printf("Fail to open file complile.txt !\n");
		goto end;
	}
	printf("Open file compile successfully\n");

	while(!feof(file1))
	{
		a=fgetc(file1);
		fputc(a,compile);
	}
	while(!feof(file2))
	{
		a=fgetc(file2);
		fputc(a,compile);
	}

	fclose(file1);
	fclose(file2);
	fclose(compile);
end:return 0;
}