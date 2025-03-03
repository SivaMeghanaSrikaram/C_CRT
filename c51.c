#include<stdio.h>
int a=10;    //to prove a is global variable we wrote it outside the main()
int main()
{
	printf("%d\n",a+2);
	s1batch();
	s2batch();
	s3batch();
	return 0;
}

s1batch()
{
	printf("%d\n",a*2);
}
s2batch()
{
	printf("%d\n",a/2);
}
s3batch()
{
	printf("%d\n",a%2);
}
