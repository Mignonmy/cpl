//关于指针行的纠结，参考指针行的地址的验证
#include <stdio.h>
void enter_arr(double arr[][5])
{
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%lf",&arr[i][j]);
		}
	}
	
}
double c_arr1 (double a[5])
{
	int i;
	double sum=0;
	for(i=0;i<5;i++)sum+=a[i];
	return sum/5;
	
}
double c_arr2(double a[][5])
{
	int i,j;
	double sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			sum+=a[i][j];
		}
	}
	return sum/15;
}
double max_arr(double a[][5])
{
	int i,j;
	double max;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(max<a[i][j]) max=a[i][j];
		}
	}
	return max;
}
void show_arr(double a[][5])
{
	int i,j;
	printf("the array you enter is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++) printf("\nthe average of each columns is:%f ",c_arr1(a[i]));	
	printf("\nthe average all number is:%f\n",c_arr2(a));
	printf("the max of the array is:%f",max_arr(a));

}
int main()
{
	double array[3][5];
	enter_arr(array);
	show_arr(array);

	
	return 0;
}
