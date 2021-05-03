#include <stdio.h>
#include <string.h>
char *string_in(char *r,char *f)
{
	int n=strlen(f)-1;
	int cnt=0;
//	printf("%d",n);
	while(*r!='\n'&&cnt<n)
	{
		if(*(r+cnt)==*(f+cnt)){
			cnt++;
		}
		else {
			cnt=0;
			r++;
		}
	}
	if(cnt==n) return r;
	else return NULL;
	
}
int main()
{
	char root[10];
	char find[10];
	char *p;
//	printf("%p",root);
	printf("please enter the root char:");
	fgets(root,10,stdin);
	printf("now please enter the char you want to find(blank to quit):");
	fgets(find,10,stdin);
	while(*root!='\n')
	{
		p=string_in(root,find);
		printf("the pointer you want to find is in the %p\n",p);
		printf("another root char:");
		fgets(root,10,stdin);
		printf("enter the char to find:");
		fgets(find,10,stdin);
	}
	
}
