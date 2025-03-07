#include<stdio.h>
int main()
{
	void *p;
	int a=5;
	p=&a;
	printf("%d\n",*(int*)p);
	float b=9.19;
	p=&b;
	printf("%f\n",*(float*)p);
	return 0;
}
