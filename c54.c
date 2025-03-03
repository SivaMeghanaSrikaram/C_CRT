#include<stdio.h>
int fact(int);  //function prototype
int main()
{
	int n,ans;
	scanf("%d",&n);
	ans=fact(n);   //function call
	printf("%d",ans);
	return 0;
}

int fact(int a)
{
	if(a==0 || a==1)
	return 1;
	else
	return a*fact(a-1);
}


