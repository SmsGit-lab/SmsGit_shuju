#include <stdio.h>
#include <stdlib.h>

void ins(int n,int *x)
 {
 	int t,*i,*j,*p,m=(n-1)/2;
 	i=x;
 	j=x+n-1;
 	p=x+m;
 	for(;i<=p;i++,j--)
 	{
 		t=*i;
 		*i=*j;
 		*j=t;
	 }
 }
 void ina(int *y,int *x)
 {
 	int t,*i,*j,*p,m=(*y-1)/2;
 	i=x;
 	j=x+*y-1;
 	p=x+m;
 	for(;i<=p;i++,j--)
 	{
 		t=*i;
 		*i=*j;
 		*j=t;
	 }
 }
 
int main(int argc, char *argv[])
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i;
	printf("����ǰ��");
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	printf("\n");
	ins(10,a);
	printf("������");
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	printf("\n");
	ina(a,a);
	printf("������");
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	printf("\n");	
 } 
 //�β�  		ʵ�� 		��ʾͬһ���ڴ�ռ�
 //������       ������
 //ָ��         ������
 //������ 		ָ��
 //ָ��   		ָ�� 
 
