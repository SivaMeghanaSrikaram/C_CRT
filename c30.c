#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,c=0;
	for(i=0;i<=127;i++)
	{
		if(isprint(i))  
		{
		printf("%c %d\n",i,i);
		c+=1;
		}
	}
	printf("%d",c);
	return 0;
}
