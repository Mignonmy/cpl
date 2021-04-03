#include <stdio.h>
int main()
{
	
	double first=0.0,last=100.0;//原始范围，后续可根据猜数缩小 
	char ch;
	double number=50.0;
	
	do
	{
		printf("is %f what you want?",number);
		scanf("%c",&ch);
		if(ch=='y') break;
		printf("please tell me that number bigger or smaller(l 0r s).");
		while((ch=getchar())=='\n') {continue;} //清理回答y n按下的换行符，使读进l s 时顺利 
	
			if(ch=='l'){
				last=number-1;
				number=(first+last)/2;
				
			} else 
			
			if(ch=='s')
			{	first=number+1;
				number=(first+last)/2;
			}
	
	} while((ch=getchar())!='y');
		
	printf("I know I can do that.");
	return 0;
}
