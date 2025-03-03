#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=3;i++)
	increment();    //function call
	return 0;
}

increment()
{
	register int a=1;
	printf("%d\n",a);
	a++;         
}

//life time of register is within the function
