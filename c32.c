#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		break;//a break statemeny in the loop should be associated with a condition
		i++;
	}
	printf("program completed");
	return 0;
}
