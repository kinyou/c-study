#include <stdio.h>
#define SIZE 5

void show_array(const double ar[],int n);

void mult_array(double ar[],int n,double mult);

int main(void){

	double dip[SIZE] = {20.0,16.66,8.2,15.3,22.22};

	/*原始数组元素*/
	printf("原始数组元素:\n");
	show_array(dip,SIZE);

	mult_array(dip,SIZE,2.5);

	/*修改后的数组*/
	printf("修改后的数组:\n");
	show_array(dip,SIZE);

	return 0;
		
}

/*输出数组元素*/
void show_array(const double ar[],int n){
	int i;

	for(i=0;i<n;i++){
		printf("%8.3f ",ar[i]);
	}

	printf("\n");
}

/*改变数组的值*/
void mult_array(double ar[],int n,double mult){
	int i;

	for (i=0;i<n;i++){
		ar[i] *= mult;
	}

}
