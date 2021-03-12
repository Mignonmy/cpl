#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	printf("please enter your name:");
	scanf("%s",name);
	
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	
	int width;
	width=strlen(name);
	printf("\"%*s\"",(width+3),name);
	return 0;
}
