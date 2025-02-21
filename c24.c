#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>=1 && c<=127)
	{
		if(c>=48 && c<=57)  
		{
			printf("digits");
		}
		else if(c>=65 && c<=90)//or we can write as if(c>='A' && c<='Z')
		{
			printf("upper");
		}
		else if(c>=97 && c<=122)
		{
			printf("lower");
		}
		else
		printf("special characters");
	}
	return 0;
}

