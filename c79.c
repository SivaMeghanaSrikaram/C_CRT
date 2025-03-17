union student
{
	char name[10];
	int rno;
	float per;
};//1
#include<stdio.h>
#include<string.h>
int main()
{
	union student s1;//2
	s1.rno=502;
	s1.per=85.6;
	strcpy(s1.name,"meghana");
	printf("%d\n",s1.rno);
	printf("%f\n",s1.per);
	printf("%s\n",s1.name);
	return 0;
}
//only name will be printed and all the others are printed with garbage values bcoz s1 is lastly initialized with name

