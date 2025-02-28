#include<stdio.h>
int a11(int*,int*); //function prototype
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	printf("%x\t%x\n",&a,&b);
	printf("%d\n",a11(&a,&b));  //........call by reference
	printf("%d\t%d\n",a,b);
	return 0;
}
int a11(int *x,int *y)//function definition
{
	printf("%x\t%x\n",x,y);
	*x=*x+2;
	*y=*y*2;
	return *x+*y;  //return expression
}

//*x=value
//x=address
