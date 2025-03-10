#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i;
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int)); //calloc()....4 blocks
	p=(int*)realloc(p,20); //realloc()
	//for(i=0;i<n;i++)
	//scanf("%d",p[i]);
	for(i=0;i<n+1;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}
