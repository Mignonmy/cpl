#include <stdio.h>
int main()
{
	int number,i;
	printf("please input the number you want:");
	scanf("%d",&number);
	printf("the result ara as follows:\n");
	for(i=number;i<=number+10;i++){
		printf("%d\n",i);
	}
	return 0;
}
