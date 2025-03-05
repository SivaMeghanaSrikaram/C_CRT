//tower of hanoi puzzle
void toh(int,char,char,char); //function prototype
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	toh(n,'a','b','c');   //calling function
	return 0;
}
void toh(int n,char a,char b,char c)
{
	if(n>0)
	{
		toh(n-1,a,c,b); //rc-1
		printf("%c to %c\n",a,c);
		toh(n-1,b,a,c); //rc-2
	}
}
