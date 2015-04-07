#include <stdio.h>
/*一般用用define来定义数组的长度*/ 
#define SIZE 10
#define PAR 72 
int main(void){
	int index,score[SIZE];
	int sum = 0;
	float average;
	
	printf("Enter %d golf scores: \n",SIZE);
	
	for(index = 0;index < SIZE;index++){
		scanf("%d",&score[index]);
	}
	
	printf("The scores read in are as follows:\n");
	
	for(index = 0;index < SIZE;index++){
		printf("%5d",score[index]);
	}
	
	printf("\n");
	
	for(index = 0;index < SIZE;index++){
		sum += score[index];
	}
	
	/*强制转化sum为float型变量*/ 
	average = (float)sum / SIZE;
	printf("Sum of scores = %d,average = %.2f\n",sum,average);
	printf("That's a handicap of %.0f.\n",average- PAR);
	
	return 0;
} 
