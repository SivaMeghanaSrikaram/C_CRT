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
	static int a=1;
	printf("%d\n",a);
	a++;         
}

// by using static ans will be 1 2 3 bcoz the lifetime is till the end of the program
//in previous prog the lifetime is within the function
