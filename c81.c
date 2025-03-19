#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("s1batch.txt","w");
	while((c=getchar())!=EOF) //EOF=end of file ctrl+z,reading data from keyboard
	{
		putc(c,fp); //storing data into the file
	}
	fclose(fp);
	fp=fopen("s1batch.txt","r");
	while((c=getc(fp))!=EOF) //reading the data from file
	{
		printf("%c",c);//printing the data on to the monitor
	}
	fclose(fp);
	return 0;
}
