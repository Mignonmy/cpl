#include <stdio.h>//i�����¶� J�����¶� k�����¶� 
double temperature(double t);
int main()
{
	double i;
	printf("please input your i:");
	
	while(scanf("%lf",&i)==1){
		temperature(i);
		printf("please input your i:");
		scanf("%lf",&i);
	}
	printf("invalid input!") ;
	
	return 0;
}
double temperature(double t)
{
	double j,k;
	const double j_k=273.16;
	const double i_j=32.0;
	j=5.0/9.0*(t-i_j);
	k=j+j_k;
	printf("%f can be discribe in %.2f(���϶�) or %.2f(���϶�)\n",t,j,k);
	return 0;
	
}



