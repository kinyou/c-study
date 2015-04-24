#include <stdio.h>
int main(void){
 int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
 int i,j;
 
 printf("zippo=%d,zippo[0][0]=%d,zipp[0]=%d,zipp[0]+1=%d\n",**zippo,zippo[0][0],*zippo[0],*(zippo[0]+1));
 for(i=0;i<4;i++){
 	printf("zippo+%d = %p\n",i,zippo+i);
 	for(j=0;j<2;j++){
 		printf("zippo[%d][%d]=%d,zippo[%d][%d] = %p\n",i,j,zippo[i][j],i,j,&zippo[i][j]); 
	 } 
 } 
 printf("int sizeof is %d\n",sizeof(int)); 
 printf(" zippo = %p,zippo+1 = %p\n",zippo,zippo+1);
 
 printf("zippo[0]=%p,zippo[0]+1 = %p\n",zippo[0],zippo[0]+1);
 
 printf("*zippo =%p,*zippo+1=%p\n",*zippo,*zippo+1);
 
 printf("zippo[0][0]=%d\n",zippo[0][0]);
 printf("*zippo[0]=%d\n",*zippo[0]);
 
 printf("**zippo=%d\n",**zippo);
 printf("zippo[2][1] = %d\n",zippo[2][1]);
 printf("*(*(zippo+2)+1)=%d\n",*(*(zippo+2)+1));
 return 0;
} 
