#include <stdio.h>
void copy_a(double *a,double *arr,int i)
{
	int j;
	for(j=0;j<i;j++){
		*(a+j)=*(arr+j);
	}
}

void copy(double (*a)[3],double (*arr)[3],int i) //��������������ʵ��һ��һ�㲻�ϱ��� 
{												//�ı�Ļ���ԭ���� 
	int j;
	for(j=0;j<i;j++){
		copy_a(*(a+j),*(arr+j),3);
	}
}


int main()
{
	double arr[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
	double a[5][3];
	int i,j;
	copy(a,arr,5);
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%f ",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
