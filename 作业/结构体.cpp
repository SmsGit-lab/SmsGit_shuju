#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
		struct date{
		int year;
		int mon;
		int day;
	};
	struct student
	{
		int number;
		char name[20];
		struct date brithday;
		//�� ֵ�� ���� 
	};

	//�ṹ�����͵Ķ���
	struct student s,s1;
	s.number=20180001;
	strcpy(s.name,"mmm"); 
	s.brithday.year=2000;
	
	printf("num:%d\nname:%d\n",s.number,s.name);
	s1=s;
	system("PAUSE"); 
	return 0;
 } 
