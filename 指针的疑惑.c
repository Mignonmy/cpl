#include <stdio.h>
void copy_arr(double a[5],double arr[5],int i) //ʹ��������Ϊ���� 
{
	int j;
	for(j=0;j<i;j++){
		a[j]=arr[j];
	}
//	printf("arr:");
//	for(j=0;j<i;j++){
//		printf("%f ",a[j]);
//	}
//	printf("\n");
}
void copy_ptr(double *b,double *ptr,int i) //��ָ������� 
{
	int j;
	for(j=0;j<i;j++){
		*(b+j)=*(ptr+j);
	}
//	printf("ptr:");
//	for(j=0;j<i;j++){
//		printf("%f ",*(b+j));
//	}
//	printf("\n");
}
void copy_ptrs (double *c,double *ptrs,double *add) //�˴�������һ��ָ��target1�����ָ�� 
{													//������*c����Ҳ���Ƕ�target1���� 
	int i;
	for(i=0;i<(add-ptrs);i++){
		*(c+i)=*(ptrs+i);
	}
//	printf("ptrs:");
//	for(i=0;i<5;i++){
//		printf("%f ",*(c+i));
//	}
//	printf("\n");
}
int main()
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	int i;
	copy_arr(target1,source,5); //ֻҪ����Ĳ������������ָ�룬�����������Ƕ�ԭ�������ָ��ָ��� 
	for(i=0;i<5;i++) printf("%f ",target1[i]); //���������ı䣬������û���ִ���������������ָ����ղ��� 
	printf("\n");
	copy_ptr(target2,source,5);
	for(i=0;i<5;i++) printf("%f ",target2[i]);
	printf("\n");
	copy_ptrs(target3,source,source+5);
	for(i=0;i<5;i++) printf("%f ",target3[i]);
	
	return 0;
}
