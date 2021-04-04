#include <stdio.h>
void copy (double a[][5],int n,int m,double t[n][m])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			t[i][j]=a[i][j];
		}
	
	}
}
void p_c (int i,int j,double t[i][j])
{
	int n,m;
	for(n=0;n<i;n++){
		for(m=0;m<j;m++){
			printf("%f ",t[n][m]);
		}
		printf("\n");
	}
}
int main()
{
	double a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	double b[3][5];
	copy(a,3,5,b);
	p_c(3,5,b);
	return 0;
}
