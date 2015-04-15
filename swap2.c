#include <stdio.h>
void interchange(int u,int v);
int main(void) {
	int x=5,y=10;
	printf("Originally x = %d and y = %d\n",x,y);
	interchange(x,y);
	printf("Now x = %d and y = %d\n",x,y);
	return 0;
}

/*函数内部确实实现了两个数的交的但是没有影响到另外一个函数的变量值*/ 
void interchange(int u,int v){
	int temp;
	printf("Originally u = %d and v = %d\n",u,v);
	temp = u;
	u = v;
	v = temp;
	printf("Originally u = %d and v = %d\n",u,v);
}
