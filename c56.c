#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	ans=gcd(a,b);
	printf("%d",ans);
	return 0;
}  
int gcd(int a,int b)
{
	if(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);//rc-1
		else
		return gcd(a,b-a);//rc-2
	}
}

//gcd program with recursion
