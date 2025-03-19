#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char c;
	if(argc!=3)
	{
		printf("invalid arguments");
		exit(0);
	}
	FILE *fs,*ft;
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("source file not present");
		exit(0);
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		printf("target file cannot be opened");
	}
	while((c=getc(fs))!=EOF)//reading the data from fs file
	{
		putc(c,ft);//storing the data into the target file
	}
	printf("File copied succesfully");
//	fclose(fs);
//	fclose(ft);
	_fcloseall(); //close all the files at a time
	return 0;
}
