#include <stdio.h>
void to_base_n(unsigned long,unsigned short);
int main()
{
	int number,n_system;
	printf("please enter number:");
	scanf("%d",&number);
	printf("please enter n_system:");
	scanf("%d",&n_system);
	to_base_n(number,n_system);
	
	return 0;
}
void to_base_n(unsigned long n,unsigned short s)
{
	int r;
	r=n%s;
	if(n>=2)
	to_base_n(n/s,s);
	printf("%d",r);
	
}
