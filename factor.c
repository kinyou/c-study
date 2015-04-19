#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void){
	int num;
	
	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit):\n");
	while(scanf("%d",&num) == 1){
		if(num < 0){
			printf("No negative numbers, please.\n");
		}else if(num > 12){
			printf("Keep input under 13.\n");
		}else{
			printf("Loop: %d factorial = %d\n",num,fact(num));
			printf("Recursion: %d factorial = %ld\n",num,rfact(num));
		}
	}
	
	printf("Bye! \n");
	
	return 0;
} 
/*使用循环计算阶乘*/ 
long fact(int n){
	long ans;
	for(ans = 1;n > 1 ;n--){
		ans *= n;
		printf("%d\n",ans);
	}
	return ans;
}

/*使用递归计算阶乘*/ 
long rfact(int n){
	long ans; 
	printf("%d\n",n);
	printf("-------------------------------------↓\n");
	if(n > 0){
		ans = n * rfact(n - 1);
		printf("%ld,%p\n",ans,n);
	}else{
		printf("last n = %d\n",n);
		ans = 1;
	}
	
	return ans;
}
