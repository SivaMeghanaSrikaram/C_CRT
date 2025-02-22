#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A' ... 'Z':printf("upper");break;
		case 'a' ... 'z':printf("lower");break;
		case '0' ... '9':printf("digit");break;
		default:printf("special symbol");break;
	}
	return 0;
}
