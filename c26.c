#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 65 ... 90:printf("upper");break;
		case 97 ... 122:printf("lower");break;
		case 48 ... 57:printf("digit");break;
		default:printf("special symbol");break;
	}
	return 0;
}
