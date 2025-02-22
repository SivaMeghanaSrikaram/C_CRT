#include<stdio.h>
int main()
{
	int a[3]={10,20};  //uninitialized elements of the array values are zero
	int i;
	for(i=0;i<3;i++)
	printf("%d\t",a[i]);
	return 0;
}
