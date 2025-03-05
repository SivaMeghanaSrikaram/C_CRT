//addition of two numbers by passing from main() [command line parametrs]
#include<stdio.h>
int main(int ac,char *v[])
{
	int x=atoi(v[1]);  //atoi() used to convert alphabet to integer...here 10 is as string and this function convert it as integer
	int y=atoi(v[2]);
	printf("%d\n",x+y);
	return 0;
}
