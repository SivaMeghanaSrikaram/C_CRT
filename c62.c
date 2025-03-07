#include<stdio.h>
int main()
{
	char *a;
	void *b;  //void pointer is also called generic pointer
	int *c;
	float **d;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(d));
	return 0;
}
// all o/p is 8 on 64bit bcoz pointer is for storing the address so same size for all
