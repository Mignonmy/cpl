#include <stdio.h>
int main()
{
	char letter[26];
	char i,j;
	for(i=0,j='a';i<26;i++,j++){
		letter[i]=j;
	}
	for(i=0;i<26;i++){
		printf("%c ",letter[i]);
	}
	return 0;
}
