#include <stdio.h>
void s_m(void);
float get_number (void); //�����ֵ���룬��Ҫ�ر������������Ļ��з� 
int main()				//��ÿ���������һ�������������ݵķ���ֵ�����ֵ 
{
	char ch;
	float first,second;
	s_m ();
	printf("enter the operation of your choice:");
	scanf("%c",&ch);
	while(getchar()!='\n') 
	continue; //�������һ�ζ������ݣ�ѡ������Ļ��з� 
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
			while((second=get_number())==0){ //ע���������˳�򣬱�Ҫ������ 
				printf("please try again,number can not be zero.enter:");
			}
			printf("%f/%f=%f\n",first,second,first/second);
			break;
		case 'q':break;
		while(getchar()!='\n') continue;//�������ѡ������Ļ��з� 
	}										//��ֹ��һ�ζ���ѡ��ʱ���ȶ�ȡ�˻��з� 
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

	while(scanf("%f",&f)!=1){  //���scanf()��ȡָ����ʽ������ʧ�ܣ��Ͱ��޷���ȡ������ 
		while(getchar()!='\n') //������������У����´ζ�ȡ���������д��룬����������ѭ�� 
		{
			printf("please try again,enter number:");
		}
	}
	return f;
}
