#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(a+i)); //*(p+i)=*(a+i)...array name defaultly it has first address  
	}
	return 0;
}
