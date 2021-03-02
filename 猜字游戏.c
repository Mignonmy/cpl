#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int number=rand()%100;
	int count=0,a=0;
	printf("我已经想好了一个0到100的数！\n输入你所想的数：");
	do
	{
		scanf("%d",&a);
		count++;
		if(a>number){printf("大了！\n");}
		else if(a<number){printf("小了!\n");}
		
	 } while(a!=number);
	 printf("你用了%d次来猜中这个数！",count);
	return 0; 
	
}
