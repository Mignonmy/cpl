#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int number=rand()%100;
	int count=0,a=0;
	printf("���Ѿ������һ��0��100������\n���������������");
	do
	{
		scanf("%d",&a);
		count++;
		if(a>number){printf("���ˣ�\n");}
		else if(a<number){printf("С��!\n");}
		
	 } while(a!=number);
	 printf("������%d���������������",count);
	return 0; 
	
}
