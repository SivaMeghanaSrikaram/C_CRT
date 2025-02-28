#include<stdio.h>
void a10(int,int); //function prototype
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a10(a,b);  //calling function
	return 0;
}
void a10(int x,int y)//formal parameters
{
	printf("%d",x+y);  //return expression
}
