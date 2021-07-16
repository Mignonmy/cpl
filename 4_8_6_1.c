#include <stdio.h>
int main()
{
	char name1[40];
	char name2[40];
//	int width1,width2;
	printf("please input your name1:");
	scanf("%s",name1);
	printf("please input your name2:");
	scanf("%s",name2);
	printf("%s",name1);
	printf(" ");
	printf("%s",name2);
	printf("\n%*d %*d",strlen(name1),strlen(name1),strlen(name2),strlen(name2));
	return 0;
}
