#include <stdio.h>
void add(double t[],double g[],double k[],int n)
{
	int i;
	for(i=0;i<n;i++){
		k[i]=t[i]+g[i];
	}
}
int main()
{
	double a[4]={2,4,5,8};
	double b[4]={1,0,4,6};
	double c[4];
	int i;
	add(a,b,c,4);
	for(i=0;i<4;i++){
		printf("%f ",c[i]);
	}
	return 0;
 } 
