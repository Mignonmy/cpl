#include <stdio.h>
int main()
{
	char i,j;
	char k='F';
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			printf("%c",k);
			k--;
		}
		k='F';
		printf("\n");
	}
	return 0;
}
