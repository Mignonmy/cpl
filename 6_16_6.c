#include <stdio.h>
int main()
{
	int n1,n2,s_n,c_n,i;
	printf("please enter the number arange:");
	
	scanf("%d%d",&n1,&n2);
	printf("number     s_n     c_n\n");
	for(i=n1;i<=n2;i++){
		printf("%5d%5d%5d\n",i,i*i,i*i*i);
	}
	return 0;
 } 
