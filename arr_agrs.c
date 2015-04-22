#include <stdio.h>
#define SIZE 10
int sum(int ar[],int n);
int sum1(int [],int n);
int sum2(int *,int n);
int sum3(int *ar,int n);
int main(void){
	int arr[SIZE] = {20,10,5,39,4,16,19,26,31,20};

	printf("The total number of arr is %d\n",sum(arr,SIZE));
	printf("The total number of arr is %d\n",sum1(arr,SIZE));
	printf("The total number of arr is %d\n",sum2(arr,SIZE));
	printf("The total number of arr is %d\n",sum3(arr,SIZE));
	printf("The size of arr is %u bytes.\n",sizeof arr);
	
	return 0;
}

int sum(int ar[],int n){
	int i;
	int total = 0;
	
	for(i=0;i<n;i++){
		total += ar[i];
		printf("%d\n",ar[i]);
	} 
	printf("The size of ar is %u bytes.\n",sizeof(ar));
	
	return total;
}

int sum1(int ar[],int n){
	int i;
	int total=0;
	
	for(i=0;i<n;i++){
		total += ar[i];
	} 
	printf("The size of ar is %u bytes.\n",sizeof ar);
	
	return total;
}

int sum2(int *ar,int n){
	int i;
	int total=0;
	
	for(i=0;i<n;i++){
		total += *(ar+i);
	} 
	printf("The size of ar is %u bytes.\n",sizeof ar);
	
	return total;
}

int sum3(int *ar,int n){
	int i;
	int total=0;
	
	for(i=0;i<n;i++){
		total += ar[i];
	} 
	printf("The size of ar is %u bytes.\n",sizeof ar);
	
	return total;
}
