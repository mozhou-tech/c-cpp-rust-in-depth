//
// Created by LiuYuancheng on 2024/11/12.
//

#include "printf.h"
int arr[] = {1, 2, 3, 4, 5};
int *pa = arr; //  arr  pa

int main() {
    printf("数组地址%d,本身就是指针%d\n", arr, pa); // 标量对应内存地址
    printf("从数组中取值%d，pa中取值 %d\n",arr[3],pa[3]);
    printf("指针地址偏移0，下标0的元素值%d\n", *arr); // 通过指针取值
    printf("指针地址偏移0，下标0的元素值%d\n", *pa); // 1
    printf("指针地址偏移3，下标4的元素值%d\n", *pa+3); // 1
    if(pa == arr){
        printf("pa == arr\n");
    }
    if(*pa == *arr){
        printf("*pa == *arr\n");
    }
    return 0;
}