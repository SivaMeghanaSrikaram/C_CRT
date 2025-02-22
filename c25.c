#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(isupper(ch))
	printf("upper");
	else if(islower(ch))
	printf("lower");
	else if(isdigit(ch))
	printf("digit");
	else
	printf("special symbol");
	return 0;
}
