#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=3;i++)
	increment();    //function call
	return 0;
}

increment()
{
	auto int a=1;
	printf("%d\n",a);
	a++;         
}
// result is always 1 bcoz when the control go back...after coming again inside the function a is 1 again

//life time of register is within the function
