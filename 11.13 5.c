#include <stdio.h>
#define SIZE 25
char *search(char *t,char c)
{
	
	while(*t!='\0'){
		if(*t==c) return t;
		else t++;
	}
}
int main()
{
	char a[SIZE];
	char ch;
	char *index;
	printf("please enter the word:");
	fgets(a,SIZE,stdin);
	do{
		printf("enter the letter you want to find(EOF to end):");
		while((ch=getchar())=='\n') continue; //这是清除第一次输入搜索字符时留下的换行符 
		if((index=search(a,ch))!=NULL)            //防止第二次读搜索字符的时候首先读进了遗留的换行符
	 	{
	 		printf("the letter %c is in the %p\n",*index,index);
	 	} else printf("the letter %c can not be found",ch);
	} while(ch!=EOF);
	return 0;
}
