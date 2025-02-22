#include<stdio.h>
int main()
{
	int a[4]={'a','n'};//every string automarically ends with null character \0
	int i;
	for(i=0;i<3;i++)
	printf("%c\t",a[i]);
	return 0;
}
