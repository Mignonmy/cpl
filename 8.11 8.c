#include <stdio.h>
void s_m(void);
float get_number (void); //混合数值输入，需要特别处理因读入产生的换行符 
int main()				//最好可以另外用一个函数读入数据的返回值获得数值 
{
	char ch;
	float first,second;
	s_m ();
	printf("enter the operation of your choice:");
	scanf("%c",&ch);
	while(getchar()!='\n') 
	continue; //处理掉第一次读入数据（选项）产生的换行符 
do{
	switch(ch)
	{
		case 'a':
			printf("enter first number:");
			first=get_number();
			printf("enter second number:");
			second=get_number();
			printf("%f+%f=%f\n",first,second,first+second);
			break;
		case 's':
			printf("enter first number:");
			first=get_number();
			printf("enter second number:");
			second=get_number();
			printf("%f-%f=%f\n",first,second,first-second);
			break;
		case 'm':
			printf("enter first number:");
			first=get_number();
			printf("enter second number:");
			second=get_number();
			printf("%f*%f=%f\n",first,second,first*second);
			break;
		case 'd':
			printf("enter first number:");
			first=get_number();
			printf("enter second number:");
			while((second=get_number())==0){ //注意运算符的顺序，必要的括号 
				printf("please try again,number can not be zero.enter:");
			}
			printf("%f/%f=%f\n",first,second,first/second);
			break;
		case 'q':break;
		while(getchar()!='\n') continue;//清理掉因选项产生的换行符 
	}										//防止下一次读入选项时首先读取了换行符 
} while(ch!='q');
	printf("Bye!");
		
	
	return 0;
}
void s_m (void)
{
	char r1[]="a.add";
	char r2[]="s.subtract";
	char r3[]="m.multiply";
	char r4[]="d.divide";
	char r5[]="q.quit";
	
	printf("%s",r1);
	printf("%20s\n",r2);
	printf("%s",r3);
	printf("%13s\n",r4);
	printf("%s\n",r5);
}

float get_number(void) 
{
	float f;

	while(scanf("%f",&f)!=1){  //如果scanf()读取指定形式的输入失败，就把无法读取的输入 
		while(getchar()!='\n') //留在输入队列中，供下次读取，若无这行代码，则这里无限循环 
		{
			printf("please try again,enter number:");
		}
	}
	return f;
}
