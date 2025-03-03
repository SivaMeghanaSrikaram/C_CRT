#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	rlh(a,b);   //function call
	return 0;
}

rlh(int a,int b)
{
	if(a<=b)
	{
		printf("%d\n",a);
		a++;
		rlh(a,b);    //recursive function call
	}	
}
