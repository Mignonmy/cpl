#include <stdio.h>
#include <ctype.h>
#define SIZE 25
char *getword(char *c,int n)
{
	char t[SIZE];
	char *p;
	p=t;
	int i=0; 
	puts("please enter you word:");
	fgets(t,SIZE,stdin);
	do{
		if(isalpha(*p)==0){
			p++;
		}
		else if(isalpha(*p)){
			*c++=*p++;
			i++;
		}
		
	} while(*p!='\0'&&i<n);
	
}
int main()
{
	char a[SIZE];
	int n;
	printf("please enter the number you want to enter:");
	scanf("%d",&n);
	while(getchar()!='\n') continue;
	getword(a,n);
	puts(a);
	return 0;
}
