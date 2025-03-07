#include<stdio.h>
int main()
{
	int *p,**q,a=5;
	p=&a; //pointer initialization
	q=&p;
	printf("%x\n",q);
	printf("%x\t%d\n",p,*p);  
	printf("%x\t%d\n",*q,**q);
	return 0;
}
