/*不使用中间变量交换两个数*/
#include <stdio.h>
int main(void){
	int a = 1;
	int b = 2;
	
	printf("a=%d b=%d\n",a,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a=%d b=%d\n",a,b); 
} 
