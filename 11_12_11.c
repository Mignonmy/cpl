#include <stdio.h>
#include <string.h>
#define SIZE 25
char *s_gets(char *st,int n)
{
	char *ret_val;
	char *p;
	ret_val=fgets(st,n,stdin);
	p=strchr(st,'\n');
	if(ret_val){
		if(1) *p='\0';
		else while(getchar()!='\n') continue;
	}
	return ret_val;
}
int main()
{
	char a[SIZE];
//	fgets(a,SIZE,stdin);
	s_gets(a,SIZE);
	puts(a);
	return 0;
}
