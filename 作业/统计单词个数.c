#include <stdio.h>

int main()
{
	printf("������Ҫͳ�Ƶľ��ӣ�");
	char c;
	int i,count=0,word=0;
	while((c=getchar())!='\n')
	if(c==' ')
		word=0; 
	else if(word==0){
		word=1;
	    count++;
	} 
	printf("���ʵĸ�����%d��",count);
	return 0; 
} 
