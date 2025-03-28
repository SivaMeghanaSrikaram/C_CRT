#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int x=a&(a-1);
	if(x==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
