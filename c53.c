#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	rhl(a,b);   //function call
	return 0;
}

rhl(int a,int b)
{
	if(a>=b)
	{
		printf("%d\n",a);
		a--;
		rhl(a,b); //recursive function call...//we can also write like this return rlh(a,b); 
	}	
}
