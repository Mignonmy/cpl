#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int a=0,b=0;//��д��ĸ�ĸ�����Сд��ĸ�ĸ��� 
	while((ch=getchar())!=EOF)
	{
		if(isupper(ch)){
			a++;
		}
		if(islower(ch)){
			b++;
		}
		
	}
	printf("%d %d",a,b);
	return 0;
}
