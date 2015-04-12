#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void){
	float weight,volume;
	int size,letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	/*这里要是输入的字符多于40个之后,下面的打印会全部打印出来,为什么
	 * 会把缓冲区的输入都给输出那,这里面要回过头来看
	 */
	scanf("%s",name);
	printf("%s,what's you weight in pounds?\n",name);
	scanf("%f",&weight);

	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;

	printf("Well,%s you volume is %2.2f cublic feet.\n",name,volume);
	printf("Also, your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it in .\n",size);

	return 0;

}
