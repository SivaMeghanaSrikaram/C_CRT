#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int a;
	a=x/y*z;  //working is left to right
	printf("%d\n",a);
	return 0;
}
