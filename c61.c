#include<stdio.h>
int main()
{
	int *p;
	int a=5;
	p=&a; //pointer initialization
	printf("%d\n",*p);  //dereferencing operation or indirect accessing
	printf("%d\n",a) //direct accessing
	return 0;
}
