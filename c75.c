#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i;
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int)); //calloc()
	for(i=0;i<n;i++)
	scanf("%d",p[i]);//in calloc() if we didn't initializes with values the zeroes are initialized by default
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}
