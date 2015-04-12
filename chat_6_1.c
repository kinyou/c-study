#include <stdio.h>

int main(void){

	int k = 1;
	
	for(
			k = (1,printf("%d: Hi!\n",k));

			printf("k = %d\n",k),k*k < 65;

			k++,printf("Now k is %d\n",k)
			
		)

		printf("k is %d in the loop\n",k);

	return 0;
}
