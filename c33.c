#include<stdio.h>
int main()
{
	int i=1;
	printf("%d\t",i);
	while(i<=10)
	{
		i++;
		if(i==2 || i==5)
		continue;
		printf("%d\t",i);
	}
	printf("program completed");
	return 0;
}

//with goto we can make forward jump and backward jump
