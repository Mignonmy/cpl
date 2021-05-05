#include <stdio.h>
int main()
{
	int week,days,left;
	const int w_d=7;
	printf("if you want to end the program,enter 0.\n");
	printf("please input the days:");
	scanf("%d",&days);
	while(days>0){
		week=days/w_d;
		left=days%w_d;
		printf("%d day(s) are/is %d week(s) and %d day(s).\n",days,week,left);
		printf("please input the days:");
		scanf("%d",&days);
	}
	return 0;
}
