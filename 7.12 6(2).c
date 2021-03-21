#include <stdio.h>
int main()
{
	int cnt=0;
	int record=0;
	char ch;
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case 'e':
				record=1;
				break;
			case 'i':
				if(record==1){
					cnt++;
					record=0;
				}
				break;
			default:
				record=0;
		}
	}
	printf("%d",cnt);
	return 0;
}
