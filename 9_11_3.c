#include <stdio.h>
void chline (char,int,int);
int main()
{
	int i,j;
	char ch;
	printf("please enter the char:");
	scanf("%c",&ch);
	printf("please enter the line:");
	scanf("%d",&i);
	printf("please enter the row:");
	scanf("%d",&j);
	chline(ch,i,j);
	
	return 0;
 } 
 void chline (char c,int line,int row)
 {
 	int i,j;
 	for(i=1;i<=line;i++){
 		for(j=1;j<=row;j++){
 			printf("%c",c);
		 }
		 printf("\n");
	 }
 }
