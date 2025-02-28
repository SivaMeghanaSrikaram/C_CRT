#include<stdio.h>
int a11(int,int); //function prototype
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	ans=a11(a,b);  //calling function  
	printf("%d",ans);  //or printf("%d",a11(a,b));
	return 0;
}
int a11(int x,int y)//function definition
{
	return x+y;  //return expression
}
