#include <stdio.h>
char *r_q(char *t)
{
	while(*t!='\0'&&*t!=' ') t++;
	if(*t=='\0') return NULL;
	else return t;
}
int main()
{
	char a[25]="i can live with that.";
	char *q;
	q=a;
	r_q(a);
	printf("%s",r_q(q)+1);

	return 0;
}
