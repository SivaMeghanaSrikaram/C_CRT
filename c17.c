#include<stdio.h>
int a=10;  //global
int main()
{
	int a=20;  //local
	printf("%d\n",a);
	return 0;
}
 //20 will be print bcoz local variable have highest priority 
 //when compared to global variable
