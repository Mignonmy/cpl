//计算所有输入数的位数的水仙花数
#include <stdio.h>
int main()
{
	int x=3;
	int g=1,h=1,n=1;
	while(n<3)
	{
		h*=10;
		n++;
	}g=h*10;//现在h是100，g是1000 
	
	int r=h;
	int i,d,k;
	while(r<g){
		int m=r; //新设定变量，m随着取余会慢慢改变，但是r后面要在原来的数不断+1 
		int j=h; //每一轮都需要100不断除以10，不设定新变量，h会改变 
		int sum=0; //每一轮的循环sum的值都需要清零，因为循环需要遍历所有三位数 
		do{
			i=m/j; //得最高位 
			d=m%j; //除去最高位剩下的 
			j/=10;
			k=i;
			k=i*i*i;
			sum += k;
			k=0;
			m=d;
		}while(j>0);
		if(sum==r){
			printf("%d\n",r);
		}
		r++;
		
	} 
	
	return 0; 
 } 
