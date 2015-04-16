#include <stdio.h>
void mikado(int * bah,int * pooh);

int main(void){
	int pooh = 2,bah = 5;
	printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
	printf("In main(),bah = %d and &bah = %p\n",bah,&bah);
	mikado(&bah,&pooh);
	
	return 0;
}

void mikado(int * bah,int * pooh){
	printf("In mikado() ,pooh = %d and &pooh = %p\n",*pooh,pooh);
	printf("In mikado(),bah = %d and &bah = %p\n",*bah,bah);
} 
