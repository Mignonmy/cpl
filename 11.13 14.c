#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	float f=atof(argv[1]);
	int i=atoi(argv[2]);
	int k;
	float result=1;
	for(k=0;k<i;k++)
	{
		result*=f;
	}
	printf("the %g 's %d power is %g\n",f,i,result);
	
	
	return 0;
}
