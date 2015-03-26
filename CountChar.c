#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char gchar;
	int num = 0;
	fp = fopen("test.txt","r");
	while(!feof(fp)){
		gchar = fgetc(fp);
		/*
		 * 空白符的含义模糊，通常是指空格' '，其ASCII码为32
		 * 制表符为'\t'，相当于4个或8个空格符，其ASCII码为9(垂直制表符'\v')
		 * 换行符为'\n'，作用是将光标移至下一行，其ASCII码为10
		 * 回车'\r'，作用是让光标移至行首，其ASCII码为13
		 * Windows下换行是\n\r，Unix系统下是\n
		 */
		if(gchar == '\012'){
			continue;
		}
		if(gchar == '\040' || gchar == '\011'){
			continue;
		}
		
		putchar(gchar);
		
		num++;
	}
	 
	num = num -1;
	printf("\n %d \n", num);
	
	fclose(fp);
	return 0;
} 
