#include <stdio.h>
#define e_t 1.5 //延申时间 
#define b_r 0.15 // 基础税率 
#define e_r 0.2 // 延申税率 
#define ec_r 0.25 // 超过税率 
void s_m (void); // 显示菜单的函数 
void s_c (float,float); // 计算工资的函数 

int main(void)
{
	int c;
	do
	{
		s_m (); //首先显示菜单 
		printf("please enter your choice(1 to 5):");
		scanf("%d",&c);
		float hours;
		switch(c) //根据输入的选择计算工资（用函数） 
		{
			case 1:printf("you choose the 1,enter your hours:");
					scanf("%f",&hours);
					s_c (8.75,hours);
					
					break;
			case 2:printf("you choose the 2,enter your hours:");
					scanf("%f",&hours);
					s_c (9.33,hours);
					
					break;
			case 3:printf("you choose the 3,enter your hours:");
					scanf("%f",&hours);
					s_c (10.00,hours);
					
					break;
			case 4:printf("you choose the 4,enter your hours:");
					scanf("%f",&hours);
					s_c (11.20,hours);
					
					break;
			case 5:break; 
		}
	} while(c!=5);
	return 0;
}
void s_m (void)
{
	char r1[]="$8.75/hr";
	char r2[]="$9.33/hr";
	char r3[]="10.00/hr";
	char r4[]="11.20/hr";
	char r5[]="quit";
	printf("enter the number correspounding to the desired pay rate or action:\n");
	printf("*******************************************************************\n");
	printf("1)%s",r1);
	printf("2)%20s\n",r2);
	printf("3)%s",r3);
	printf("4)%20s\n",r4);
	printf("5)%s",r5);
	printf("*******************************************************************\n");
		
}
void s_c (float b_s,float hours) //此处b_s对应上面函数应用的第一个参数 
{
	float t,salary,tax,left;
	if(hours<=40)
	{
		t=hours;
	} else if(hours>40)
	{
		t=40+(hours-40)*e_t;
	}
	
	salary=b_s*t;
	if(salary<=300)
	{
		tax=salary*b_r;
		left=salary-tax;	
	}
	if(salary>300&&salary<=450)
	{
		tax=300*b_r+(salary-300)*e_r;
		left=salary-tax;
	} 
	else 
	{
		tax=300*b_r+150*e_r+(salary-450)*ec_r;
		left=salary-tax;
	}
	printf("your final salary is %f\n\n",left);
}
	
	
	










