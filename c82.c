#include<stdio.h>
int main()
{
	FILE *fp;
	int a;
	fp=fopen("s1batchnum.txt","w");
	while(1) 
	{
		scanf("%d",&a);
		if(a==-1)
		break;
		putw(a,fp); //storing number into the file
	}
	fclose(fp);
	fp=fopen("s1batchnum.txt","r");
	while((a=getw(fp))!=EOF) //reading the data from file
	{
		printf("%d\n",a);//printing the data on to the monitor
	}
	fclose(fp);
	return 0;
}
