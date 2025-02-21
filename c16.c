#include<stdio.h>
int main()    //there are 2 variables in this program even though the name is same
{
	int a=10;    //global variable
	{
		int a=20;     //local varible
		printf("%d\n",a);
	}
	printf("%d\n",a);
	return 0;
}

// 20 will be print first
//we can write prog with same variable name but not in same scope
