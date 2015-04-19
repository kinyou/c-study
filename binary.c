#include <stdio.h>
void to_binary(unsigned long n);
int main(void){
	unsigned long number;
	printf("Enter an integer (q or quit):\n");
	while(scanf("%ul",&number) == 1){
		printf("Binary equivalent\n: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q or quit): \n");
	}
	
	printf("Done.\n");
	
	return 0;
}
/*递归函数*/ 
void to_binary(unsigned long n){
	int r;
	r = n % 2;
	if(n >= 2){
		printf("n = %d r = %d\n",n,r);
		to_binary(n/2);
	}
	putchar('0'+r);
	
	return;
}
