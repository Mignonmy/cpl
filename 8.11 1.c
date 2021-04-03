#include <stdio.h>
int main()
{
	int cnt;
	char ch;
	while((ch=getchar())!=EOF)
	{
		cnt++;
	}
	
	printf("this file has %d characters.\n",cnt);
	
	return 0;
}
