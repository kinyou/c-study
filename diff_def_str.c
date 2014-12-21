/*主要的差别是数组名heart是常量，而指针head则是一个变量*/
#include <stdio.h>

int main(void){

	char heart[] = "I love Tillie!";

	char *head = "I love Millie!";
	
	int i;

	/*同时可以用数组符号来遍历*/
	for(i=0;i<6;i++){
		putchar(heart[i]);
	}

	putchar('\n');

	for(i=0;i<6;i++){

		putchar(head[i]);
	}

	putchar('\n');

	for(i=0;i<6;i++){
		putchar(*(heart+i));
	}

	putchar('\n');

	/*同时可以用指针来遍历*/
	for(i=0;i<6;i++){
		putchar(*(head+i));
	}
	putchar('\n');

	/*只有指针才可以使用++和--操作*/
	while(*(head) != '\0') {
		putchar(*head);
		head++;
	}

	putchar('\n');

	return 0;
}
