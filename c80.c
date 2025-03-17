struct s1batch
{
	int a:25;
	int b:8;
};
#include<stdio.h>
int main()
{
	struct s1batch s1;
	printf("%d\n",sizeof(s1));
	return 0;
}

//datatype variablename : no of bits required
//bit fields works with only int and char datatype
