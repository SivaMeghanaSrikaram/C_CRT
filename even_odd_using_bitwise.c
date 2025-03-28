#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if((a&1)==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
