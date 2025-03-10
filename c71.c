#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	scanf(" %[^\n]",a);
	printf("%s",a);
	return 0;
}
