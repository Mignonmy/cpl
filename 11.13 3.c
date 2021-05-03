#include <stdio.h>
#include <ctype.h>
#define SIZE 25
char *getword(char *c)
{
	char t[SIZE];
	char *p;
	p=t;
	puts("please enter you word:");
	fgets(t,SIZE,stdin);
	do{
		if(isalpha(*p)==0){
			p++;
		}
		else if(isalpha(*p)){
			*c++=*p++;
		}
	} while(*p!='\0');
	
}
int main()
{
	char a[SIZE];
	getword(a);
	puts(a);
	return 0;
}
