#include <stdio.h> //����Ҳ��΢Ц��һ���أ�
int S(void);
int main (void)
{
	S();S();S();
	printf("\n");
	S();S();
	printf("\n");
	S();
	
	return 0;
 } 
 
 int S(void)
 {
 	printf("Smile!");
 	return 0;
 }
