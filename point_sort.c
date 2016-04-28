//
//  point_sort.c
//  cstudy
//
//  Copyright © 2016年 星渊王. All rights reserved.
//

#include <stdio.h>

void sort(int *p,int num);

int main(void){
    int i,*p,arr[10];
    int num = 10;
    p = arr;
    //循环输入十个数放到数组arr中
    printf("请输入十个数:\n");
    
    for (i=0; i<num; i++) {
        scanf("%d",p++);
    }
    printf("排序之前的数组:\n");
    for (i=0; i<num; i++) {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    
    sort(arr,num);
    
    printf("排序之后的数组:\n");
    for (i=0; i<num; i++) {
        printf("%d  ",arr[i]);
    }
    printf("\n");

    
    return 0;
}

void sort(int *p,int num){
    int i,j,tmp;
    for (i=0; i<num-1; i++) {
        for (j=0; j<num -1- i; j++) {
            if (*(p + j) < *(p +j + 1) ) {
                tmp = *(p +j);
                *(p + j) = *(p + j + 1);
                *(p +j +1) = tmp;
            }
        }
    }
}
