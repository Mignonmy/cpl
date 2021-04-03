#include <stdio.h>
int main ()
{
	char ch;
	int cnt=0;
	while((ch=getchar())!=EOF)
	{
		
		if(ch=='\t')
		{
			printf(" \\t--\\t");
		}
		if(ch=='\n')
		{
			printf(" \\n--\\n");
		}
		if(ch>='\040')
		{
			printf(" \'%c\'--%3d",ch,ch);
		} else 
		{
			printf(" \'%c\'--^%c",ch,(ch+64));
		}
		
		cnt++;
		if(cnt%10==0)
		{
			printf("\n");
		}
	}
	return 0;
}
