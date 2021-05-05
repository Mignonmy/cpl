#include <stdio.h>
int s (char *p)
{
	int i=0;
	while(*p!='\0'){
		p++;
		i++;
	}
	return i;
}
int main()
{
	char a[25];
	gets(a);
	
	printf("this sentence has %d letter.",s(a));
	return 0;
}
