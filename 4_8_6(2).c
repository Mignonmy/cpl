#include <stdio.h>
int main()
{
	char name1[40];
	char name2[40];
	int width1,width2;
	printf("please input your name1:");
	scanf("%s",name1);
	printf("please input your name2:");
	scanf("%s",name2);
	width1=printf("%s",name1);
	printf(" ");
	width2=printf("%s",name2);
	printf("\n%*d %*d",width1,width1,width2,width2);
	return 0;
}
