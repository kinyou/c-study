#include <stdio.h>

int main(void){

    int ref[] = {8,4,0,2};

    printf("%d %d\n",sizeof(int),sizeof(ref));

    printf("The ref size is: %d\n",sizeof(ref)/sizeof(int));

    return 0;
}
