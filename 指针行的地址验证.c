#include <stdio.h>
int main()
{
	double a[3][2];
	printf("the size of double is %d\n",sizeof(double));
	printf("%p %p %p\n",&a[0],&a[0][0],a); //������Ҳ��������Ԫ�صĵ�ַ 
	printf("%p %p %p",&a[1],&a[1][0],&a[1][1]);//a[1]�ĵ�ַ��a[1][0]�ĵ�ַ��һ���� 
	return 0;
}
