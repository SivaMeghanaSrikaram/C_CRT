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
	//union student s1={502,85.6,"meghana"};(this initialization is wrong)
	union student s1;//2
	s1.rno=502;
	printf("%d\n",s1.rno);
	s1.per=85.6;
	printf("%f\n",s1.per);
	strcpy(s1.name,"meghana");
	printf("%s\n",s1.name);
	return 0;
}
