#include<stdio.h>
int main()
{
	int *p1,*p2,*p3;
	int a=5;
	p1=&a; //pointer initialization
	p2=&a;
	p3=p2;//we can initialize one pointer with another pointer
	printf("%x\t%d\n",p1,*p1);  
	printf("%x\t%d\n",p2,*p2);
	printf("%x\t%d\n",p3,*p3);
}

