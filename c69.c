#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	int i,*p;
	p=&a[0];
	for(i=0;i<3;i++)
	{
		printf("%d\n",p[i]); //*(p+i) or p[i] both are same
	}
	return 0;
}
