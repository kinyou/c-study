#include <stdio.h>
#define SIZE 3
int sum(int ar[],int n);
int main(void){
	int total;
	int arr[SIZE]={1,2,3};
	for(int i=0;i<SIZE;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	printf("\n");
	total = sum(arr,SIZE);
	for(int i=0;i<SIZE;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("total=%d\n",total); 
}

int sum(int ar[],int n){
	int i;
	int total=0;
	for(i=0;i<n;i++){
		/*如果形参给实参传递的是一个数组名称的话此时ar[i]和*(ar+i)是相同的*/ 
		total += ar[i]++; 
		
	}
	
	return total;
}
