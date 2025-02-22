#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	switch(n)
	{
		case 0:printf("even");break;
		case 1:printf("odd");break;
		default:r=n%2;
		switch(r)
		{
			case 0:printf("even");break;
			case 1:printf("odd");break;
		}
	}
	return 0;
}
