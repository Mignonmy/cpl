#include <stdio.h>
double cubic(double n);
int main()
{
	double number;
	scanf("%lf",&number);
	cubic(number);
	return 0;
}
double cubic(double n){
	double t=n*n*n;
	printf("the cubic for %lf is %f.",n,t);
	
	return t;
}
