#include <stdio.h>
#include <math.h>
double power(double,int);
int main()
{
	int b;
	double a,result;
	printf("please enter x:");
	scanf("%lf",&a);
	printf("please enter xpow:");
	scanf("%d",&b);
	result=power(a,b);
	printf("the final result is %f",result);
	return 0;
}
double power (double x,int xpow)
{
	double t=1;
	int i;
	if(x==0)
	return 0.0;
	if(xpow==0)
	return 1.0;
	else {
		for(i=1;i<=fabs(xpow);i++){
			t=t*x;
		}
	}
	if(xpow<0)
	return 1/t;
	else return t;
	
}
