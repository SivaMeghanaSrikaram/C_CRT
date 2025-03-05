#include<stdio.h>
int main(int ac,char *v[])
{
 //itoa() used to convert integer to alphabet
	char buffer[20];
	itoa(5,buffer,2);// syntax: itoa(number,string,base-value); -----> base-value 2 here menas binary
	printf("%s\n",buffer);
	return 0;
}
