#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	scanf("%c",&ch);
	scanf("%d%d",&a,&b);
	switch(ch){
		case '+':printf("%d",a+b);break;
		case '-':printf("%d",a-b);break;
		case '*':printf("%d",a*b);break;
		case '/':printf("%d",a/b);break;
		case '%':printf("%d",a%b);break;
		default:printf("wrong operator");break;
	//default statement is not compulsary and it can be anywhere in switch
	}
	return 0;
}

/*
we can also write like this...
case '+':c=a+b;printf("%d",c);break;
*/
