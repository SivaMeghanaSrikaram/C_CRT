//command line parameters
#include<stdio.h>
int main(int ac,char *v[])
{
	printf("%d\n",ac);
	int i;
	for(i=0;i<ac;i++)
	printf("%s\n",v[i]);
	return 0;
}

//by default it gives 1 parameter and v[0] is program name and its path 

//to give parameters go to execute and click on parameters, give the parameters by ur wish and all will save as strings
