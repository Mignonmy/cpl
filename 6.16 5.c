#include <stdio.h>
int main()
{
	int i,j,k;
	char ch='A';
	char letter;
	printf("please enter the letter you want:");
	scanf("%c",&letter);
	k=letter-'A'+1; //行数 
	for(i=1;i<=k;i++){ //控制行数 
		for(j=0;j<k-i;j++){ //空格数 
			printf(" ");
		} 
		for(ch='A';j<k;j++){ //j已经有过累加，表示打印了多少个数，当还未到达输入的值，继续打印 
			printf("%c",ch++); //为什么下面要加2，因为打印的是ch++的值，打印完后再加了1 
		}
		for(j=1,ch-=2;j<i;j++,ch--){ //倒叙打印，从中间开始，算打印了第一个，j=1 
			printf("%c",ch);		//当他小于行数，继续打印，观察程序输出，最大字母后边的打印个数比行数小1 
		}
		printf("\n");
	}
	return 0;
}
