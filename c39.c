#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));//is equal to int a[n] 
	for (i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t %x\n",p[i],&p[i]);
	}
	free(p);
	return 0;
}
