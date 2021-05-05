#include <stdio.h>
int main(int argc,char *argv[])
{
	int i;
	if(argc<2){
		printf("error!");
	}	
	else {
		for(i=argc;i>1;i--){
		printf("%s ",argv[i-1]);
		}
		printf("\n");
	}
	return 0;
}
