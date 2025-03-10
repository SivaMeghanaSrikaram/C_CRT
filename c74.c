#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p,i;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));  //malloc()
	for(i=0;i<n;i++)
	scanf("%d",p[i]); //in malloc() if we didn't initializes with values the garbage values are initialized by default
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}

//n=4 bytes...compile time
//i=4 bytes...compile time 
//pointer pointing a memory block size=10*4=40...runtime 
