#include<stdio.h>
void a00(); //function prototype
int main()
{
	a00();  //calling function
	return 0;
}
void a00()//function definition
{
	int a,b;  //local varaiables
	scanf("%d%d",&a,&b);  //executable statements
	printf("%d\t",a+b);
}
