#include<stdio.h>
int mul(int,int);//function prototype
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int (*p)(); //pointer that points to a function
	p=mul; //storing function address
	printf("%d\n",p(x,y));//function call of mul using pointer(indirect)
	printf("%d\n",mul(x,y)); //function call of mul(direct)
	return 0;
}
int mul(int x,int y)
{
	return x*y;
}
