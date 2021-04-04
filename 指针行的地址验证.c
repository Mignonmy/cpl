#include <stdio.h>
int main()
{
	double a[3][2];
	printf("the size of double is %d\n",sizeof(double));
	printf("%p %p %p\n",&a[0],&a[0][0],a); //数组名也是数组首元素的地址 
	printf("%p %p %p",&a[1],&a[1][0],&a[1][1]);//a[1]的地址和a[1][0]的地址是一样的 
	return 0;
}
