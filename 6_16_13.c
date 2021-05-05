#include <stdio.h>
int main()
{
	double power[8];
	double fd=2.0;
	int i;
	for(i=0;i<8;i++){
		power[i]=fd;
		fd*=2;
	}
	i=0;
	do
	{
		
		printf("%f\n",power[i]);
		i++;
	} while(i<8);
	return 0;
}
