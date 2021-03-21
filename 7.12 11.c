//洋蓟 2.05 dollors/p 甜菜1.15 胡萝卜1.09 
#include <stdio.h>
#define p_a 2.05
#define p_b 1.15
#define p_c 1.09
#define b_d 6.5 //基础运费 
#define e_d 14 //延申运费 
#define ec_d 0.5 //超过运费 
#define disc 0.05
float g_w (void); //获取重量的函数 
int main()
{
	float w_a=0;
	float w_b=0;
	float w_c=0;
	char ch;
	float weight,amount,discount,delivery_p,total;
	
	
	do
	{
		printf("please choose your v(q to quit):");// a b c对应 
		scanf("%c",&ch);
		switch(ch)
		{
			case 'a':w_a+=g_w();
					
					break;
			case 'b':w_b+=g_w();
					
					break;
			case 'c':w_c+=g_w();
					
					break;
			case 'q':break;
		}
	} while(ch!='q');
	
	amount=p_a*w_a+p_b*w_b+p_c*w_c; //计算单纯购买所花价格 
	weight=w_a+w_b+w_c; //计算所有重量和 
	if(amount>=100) //是否有打折 
	{
		discount=amount*disc;
	} 
	else {
		discount=0;
	}
	
	if(weight<=5) //根据重量选择运费 
	{
	delivery_p=b_d;	
	}
	if(weight>5&&weight<=20)
	{
		delivery_p=e_d;
	} 
	else 
	{
		delivery_p=14+(weight-20)*ec_d;
	}
	
	total=amount-discount+delivery_p;
	printf("your order a for %g pound,b for %g pound,c for %g pound\n",w_a,w_b,w_c);
	printf("your total weight is %g,total amount is %g,the discount is %g and the final is %g\n",weight,amount,discount,total);
	
	return 0;
 } 
 float g_w (void)
 {
	float weight;
	printf("please entet the pound you want to buy:");
	scanf("%f",&weight);
	getchar();
	
	return weight;
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
