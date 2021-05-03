#include <stdio.h>
#include <string.h>
char *adverse(char *r)
{
	int n=strlen(r);
	char s[n];
	int i;
	for(i=0;i<n;i++){
		*(s+i)=*(r+n-1-i);
	}
	for(i=0;i<n;i++){
		*(r+i)=*(s+i);
	}
	return r;
}
int main()
{
	char *t,*p;
	char a[10];
	int i;
	
	printf("please enter the a(blank to quit):");
	fgets(a,10,stdin);
	int n=strlen(a);
	fputs(a,stdout);
	while(*a!='\n'){
		p=adverse(a);
		printf("now the a is %s\n",a);
		
		printf("another a:");
		fgets(a,10,stdin);
	}
	
	return 0;
}

