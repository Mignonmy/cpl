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
		while((ch=getchar())=='\n') continue; //���������һ�����������ַ�ʱ���µĻ��з� 
		if((index=search(a,ch))!=NULL)            //��ֹ�ڶ��ζ������ַ���ʱ�����ȶ����������Ļ��з�
	 	{
	 		printf("the letter %c is in the %p\n",*index,index);
	 	} else printf("the letter %c can not be found",ch);
	} while(ch!=EOF);
	return 0;
}
