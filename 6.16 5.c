#include <stdio.h>
int main()
{
	int i,j,k;
	char ch='A';
	char letter;
	printf("please enter the letter you want:");
	scanf("%c",&letter);
	k=letter-'A'+1; //���� 
	for(i=1;i<=k;i++){ //�������� 
		for(j=0;j<k-i;j++){ //�ո��� 
			printf(" ");
		} 
		for(ch='A';j<k;j++){ //j�Ѿ��й��ۼӣ���ʾ��ӡ�˶��ٸ���������δ���������ֵ��������ӡ 
			printf("%c",ch++); //Ϊʲô����Ҫ��2����Ϊ��ӡ����ch++��ֵ����ӡ����ټ���1 
		}
		for(j=1,ch-=2;j<i;j++,ch--){ //�����ӡ�����м俪ʼ�����ӡ�˵�һ����j=1 
			printf("%c",ch);		//����С��������������ӡ���۲��������������ĸ��ߵĴ�ӡ����������С1 
		}
		printf("\n");
	}
	return 0;
}
