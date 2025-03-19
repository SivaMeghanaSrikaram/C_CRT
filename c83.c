#include<stdio.h>
int main()
{
	FILE *fp;
	char n[20];
	int r,cr;
	float p;
	fp=fopen("s1batchmulv.txt","w");
	while(1)
	{
		scanf("%s%d%f",&n,&r,&p);//reading the data from keyboard
		if(r==-1)
		break;
		fprintf(fp,"%s%d%f",n,r,p);//storing the data into the file
		cr++;
	}
	fclose(fp);
	fp=fopen("s1batchmulv.txt","r");
	while(cr)
	{
		fscanf(fp,"%s%d%f",n,r,p);//reading the data from file
		printf("%s%d%f",n,r,p);
		cr--;
		}
	fclose(fp);
	return 0;
}
