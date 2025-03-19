#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("s1batchranf.txt","w");
	char c;
	while((c=getchar())!=EOF)//reading the data from keyboard
	{
		putc(c,fp);//storing the data into the file
	}
	fclose(fp);
	fp=fopen("s1batchranf.txt","r");
	printf("%d\n",ftell(fp));
	while((c=getc(fp))!=EOF)
	{
		printf("%c at %d\n",c,ftell(fp));
		fseek(fp,5,1);
		rewind(fp);
	}
	fclose(fp);
	return 0;
}
