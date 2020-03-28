#include <stdio.h>

int main()
{
	printf("请输入要统计的句子：");
	char c;
	int i,count=0,word=0;
	while((c=getchar())!='\n')
	if(c==' ')
		word=0; 
	else if(word==0){
		word=1;
	    count++;
	} 
	printf("单词的个数是%d个",count);
	return 0; 
} 
