#include <stdio.h>
int main()
{
	char ch;
	int cnt=0;
	int e=0,i=0;
	while((ch=getchar())!='#')
	{
		if(ch=='e')
		{
			e++;
		
		}
		
		if(e==1&&ch=='i'){
			i++;
		}
		if(e==1&&i==1)
		{
			cnt++;
			e=i=0;
		} 
		if(ch!='e'&&ch!='i')
		{
			e=i=0;
		}
		
	}
	printf("%d",cnt);
	return 0;
}
