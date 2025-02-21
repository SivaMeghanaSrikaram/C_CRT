#include<stdio.h>
#define len 5
#define BRE 4  
int main()
{
	#define len 6  //warning message 
	int a,p;
	a=len*BRE;
	p=2*(len+BRE);
	printf("%d\n%d\n",a,p);
	return 0;
}

