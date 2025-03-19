#include<stdio.h>
int main()
{
	int a=5,b=10;
	int *const p=&a; //1,2
	printf("%d at %x\n",*p,p);//3
	return 0;
}
