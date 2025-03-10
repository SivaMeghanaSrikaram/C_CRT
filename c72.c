#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	char *p;
	p=(char*)malloc(n*sizeof(char));
	scanf(" %[^\n]",p);
	printf("%s",p);
	free(p);
	return 0;
}
