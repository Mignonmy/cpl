#include <stdio.h>
float calc(float,float);
int main()
{
	float i,j;
	
	printf("please enter:");
	while(scanf("%f%f",&i,&j)==2){
		printf("%f",calc(i,j)); //ʹ�ú���ʱ������������ ��������д�õ��Ĳ������� 
		printf("\nplease enter:");
	} 
	return 0;
 } 
 float calc(float i,float j) //����Ҫ�õ��������� 
 {
 	float t;
 	t=(i-j)/(i*j);
 	return t;
 }
