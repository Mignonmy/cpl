#include <stdio.h>
float calc(float,float);
int main()
{
	float i,j;
	
	printf("please enter:");
	while(scanf("%f%f",&i,&j)==2){
		printf("%f",calc(i,j)); //使用函数时不带数据类型 ，括号内写用到的参数名称 
		printf("\nplease enter:");
	} 
	return 0;
 } 
 float calc(float i,float j) //这里要用到参数名称 
 {
 	float t;
 	t=(i-j)/(i*j);
 	return t;
 }
