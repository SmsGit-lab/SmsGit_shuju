#include <stdio.h>
#include <stdlib.h>

	struct s{
		char name[20];
		int count;
	}leader[3]={{"t",0,},{"j",0,},{"a",0}};
int main (int argc, char *argv[])
{
	char name2[20];
	int i,j;
	printf("请输入你的投票：");
	for(i=0;i<10;i++){
		scanf("%s",name2);
		for(j=0;j<3;j++){
			if(strcmp(name2,leader[j].name)==0)
				leader[j].count++;	
		}
	}
	printf("name\tcount\n");
	for(i=0;i<3;i++)
	printf("%s\t%d\n",leader[i].name,leader[i].count);
	if(leader[0].count>leader[1].count){
		int tmp=leader[0].count;
		leader[0].count=leader[1].count;
		leader[1].count=tmp;
	}
	if(leader[1].count>leader[2].count){
		int tmp=leader[1].count;
		leader[1].count=leader[2].count;
		leader[2].count=tmp;
	}
	printf("是：%d",leader[2].name);
} 
