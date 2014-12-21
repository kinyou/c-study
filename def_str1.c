#include <stdio.h>

int main(void){

	/*如果字符串文字中间没有间隔或者间隔是空格符，ANSIC会将其串联起来*/
	char greeting1[50] = "Hello , and " "how are " "you " "today";

	char greeting2[50] = "Hello , and how are you today";

	/*上面两种定义方式是等价的*/
	printf("def_str1:%s\n",greeting1);
	printf("def_str2:%s\n",greeting2);

	return 0;
}
