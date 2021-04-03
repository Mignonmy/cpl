#include <stdio.h>
void c (int *,int *);
int main()
{
	int x,y;
	printf("please enter x:");
	scanf("%d",&x);
	printf("please enter y:");
	scanf("%d",&y);
	printf("the value of x is %d ,y is %d\n",x,y);
	c(&x,&y); //函数中用指针记得在调用函数的时候发送地址啊 
	printf("and now x is %d y is %d",x,y);
	
	return 0;
}
void c (int *x,int *y)
{
	int a,b;
	a=*x;
	b=*y;
	*x=a-b;
	*y=a+b;
	
}
