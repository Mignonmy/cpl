#include <stdio.h>
#include <string.h>
int main()
{
	char word[10];
	int j;
	scanf("%s",word);
	for(j=strlen(word)-1;j>=0;j--){
		printf("%c",word[j]);
	}
	return 0;
}
