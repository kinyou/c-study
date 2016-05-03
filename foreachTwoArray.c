//
//  foreachTwoArray.c
//  cstudy
//
//  Copyright © 2016年 星渊王. All rights reserved.
//

#include <stdio.h>

int main(void){
    int a[3][4] = {
        {1,3,5,7},
        {9,11,13,15},
        {17,19,21,23}
    };
    int (*p)[4];
   
    p = a;
    
    int i,j;
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    
    printf("有疑惑,另外一种循环的方法:\n");
    
    int *p1;
    p1 = a[0];
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            
            printf("%d  ",*(p1++));
        }
        printf("\n");
    }
    return 0;
}


