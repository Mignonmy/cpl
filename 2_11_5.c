#include <stdio.h>
int br(void);
int ic(void);

int main(void)
{
	br(); printf(",");ic();
	ic();
	br();
	
	return 0;
 } 
 
 int br(void)
 {
 	printf("Brazil,Russia");
 	return 0;
 }
 
 int ic(void)
 {
 	printf("India,China\n");
 	return 0;
 }
