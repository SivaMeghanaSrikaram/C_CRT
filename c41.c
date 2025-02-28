#include<stdio.h>
int a01(); //function prototype
int main()
{
	int ans;
	ans=a01();  //calling function    
	printf("%d",ans);//or we can write printf without variable..printf("%d",a01())
	return 0;
}
int a01()//function definition
{
	int a,b;  //local varaiables
	scanf("%d%d",&a,&b);  //executable statements
	return a+b;  //return expression
}
