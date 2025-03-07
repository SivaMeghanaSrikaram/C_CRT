#include<stdio.h>
int main()
{
	int *p;
	int a=5,b=10,c=15;
	p=&a; //pointer initialization
	printf("%x\t%d\n",p,*p);
	p=&b; //pointer initialization
	printf("%x\t%d\n",p,*p);
	p=&c; //pointer initialization
	printf("%x\t%d\n",p,*p);
	return 0;
}
