#include <stdio.h>
#define M 2
#define N 3

int main(void){
	
	int i,j;
	int a[M][N] = {{3,4,5},{6,7,8}};
	printf("a[0]=%p\n",a);
	/*数组名加1可以二维数组跳到下一行的首地址*/
	printf("a[1]=%p\n",a+1);
	printf("a[1]=%p\n",*(a+1));

	for (i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("a[%d][%d]=%d  a[%d][%d] = %p\n",i,j,a[i][j],i,j,&a[i][j]);
		}
	}

	return 0;
}
