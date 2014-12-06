#include <stdio.h>

int main(void){

	int a = 3;
	
	printf("变量不会因它的值的变化而移动位置的！\n\n");

	printf("第一次a的地址&a=%p\n\n",&a);

	a = 5;

	printf("第二次a的地址&a=%p\n\n",&a);

	return 0;

}
