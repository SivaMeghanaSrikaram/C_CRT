#include<stdio.h>
int d;  //here also it will show warning if we write extern int d;
int main()
{
//	extern int d;  dont write here it will show warning
	printf("%d\n",d);
	return 0;
}

//then write int d outside thw main() without specifying extern 

//if the int variable outside the main() then the default storage class is extern

//if the int variable inside the main() then the default storage class is auto 
