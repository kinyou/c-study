#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name!"
int main(void){
	char name[4];

	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello ,%s. %s\n",name,PRAISE);

	printf("%d,%d,%d,%d\n",strlen(name),sizeof(name),strlen(PRAISE),sizeof(PRAISE));
	return 0;
}
