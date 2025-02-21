#include<stdio.h>
int main()
{
	const int a=5; //variable 'a' changes to constant with const keyword
	a=a*10;   //error here
	printf("%d\n",a);
	return 0;
}
