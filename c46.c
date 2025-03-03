#include<stdio.h>
int main()
{
	auto int a; //always the o/p is not zero
	static int b; //always the o/p is not zero
	register int c;
	printf("%d\t%d\t%d\n",a,b,c);
	return 0;
}
