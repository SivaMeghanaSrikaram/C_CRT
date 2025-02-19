#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a=0,b=5;
	if(a && b++)
	{
		printf("%d\n%d\n",a*2,b*2);
	}
	else
	{
		printf("%d\n%d\n",a+2,b+2);
	}
	return 0;
}
