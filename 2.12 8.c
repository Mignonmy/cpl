#include <stdio.h>
int one_three();
int two();

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("\n");
	two();
	printf("\n");
	printf("three\ndone!");
	
	return 0;
}
int one_three()
{
	printf("one");
	return 0;
}
int two()
{
	printf("two");
	return 0;
}





