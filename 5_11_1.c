#include <stdio.h>
#define h_s 60
int main()
{
	int hour,left,minute;
	printf("if you want to end the program,enter 0.\n");
	printf("please input the minute:");
	scanf("%d",&minute);
	
	while(minute>0)
	{
		hour=minute/h_s;
		left=minute%h_s;
		printf("the time is %d hour and %d minute.\n",hour,left);
		printf("please input the minute:");
		scanf("%d",&minute);
	}
	printf("invalid input!");
	return 0;
}
