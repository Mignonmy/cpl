#include <stdio.h>
int main() {
	int a,b;
	for(a=1; a<10; a++) {
		for(b=1; b<=a; b++) {
			printf("%d*%d=%d ",b,a,a*b);
			
		}
		printf("\n");
	}
	return 0;
}
