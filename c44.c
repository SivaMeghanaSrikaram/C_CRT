#include<stdio.h>
int a11(int,int); //function prototype
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	printf("%x\t%x\n",&a,&b);
	printf("%d",a11(a,b));  //........call by value
	return 0;
}
int a11(int x,int y)//function definition
{
	printf("%x\t%x\n",&x,&y);
	return x+y;  //return expression
}
