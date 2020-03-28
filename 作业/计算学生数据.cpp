/*  
* 问题描述:有10个学生，每个学生的数据包括学号、姓名、3门课的成绩.
*          从键盘输入10个学生数据，要求打印出3门课总平均成绩.
*          以及最高分的学生的数据(包括学号、姓名、3门课的成绩、平均分数)。
*/  
#include<stdio.h>
#define N 10
struct student
{
	char  num[6];
	char name[20];
	float score[3];
	float avr;
}stu[N];
int  main()
{
	int i,j,maxi;
	float sum,max,average;
	for(i=0;i<N;i++)
	{
		printf("请输入成绩 学生%d :\n",i+1);
		printf("学号.:");
		scanf("%s",stu[i].num);
		printf("姓名:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("科目 %d:",j+1);
			scanf("%f",&stu[i].score[j]);
		}
	}
	average=0;
	max=0;
	maxi=0;
	for(i=0;i<N;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
			sum+=stu[i].score[j];
		stu[i].avr=sum/3.0;
		average+=stu[i].avr;
		if(sum>max)
		{
			max=sum;
			maxi=i;
		}
	}
	average/=N;
	printf("  No.      姓名     科目一      科目二      科目三      平均成绩\n");
	for(i=0;i<N;i++)
	{
		printf("%5s%10s",stu[i].num,stu[i].name);
			printf("%9.2f",stu[i].score[0]);
			printf("    %9.2f",stu[i].score[1]);
			printf("    %9.2f",stu[i].score[2]);
            printf("   %8.2f\n",stu[i].avr);
	}
	printf("average=%5.2f\n",average);
	printf("The highest score is:student %s,%s.\n",stu[maxi].num,stu[maxi].name);
	printf("His scores are :%6.2f,%6.2f,%6.2f,average:%5.2f.\n",stu[maxi].score[0],
		stu[maxi].score[1],stu[maxi].score[2],stu[maxi].avr);
}
