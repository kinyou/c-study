#include <stdio.h>
#define SIZE 5

int main(void){
	const int days[SIZE]={1,2,3,4,6};
	int i;

	for(i=0;i<SIZE;i++){

		/*用const修饰的数组是不允许对其修改值*/
		days[i] += 2;

		printf("%8d ",days[i]);
	}

	/*用const修饰的指针变量和数组建立关系之后，其数组的值也不允许修改*/
	const *p = days;

	for(i=0;i<SIZE;i++){

		days[i[ += 3;
		printf("%8d ",days[i]);
	}


	return 0;

}
