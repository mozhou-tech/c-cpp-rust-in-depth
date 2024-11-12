//
// Created by LiuYuancheng on 2024/11/12.
//

#include <printf.h>

int main()
{
    int a = 10;
    int *pa = &a; //  a
    printf("指针地址%d,指针值%d\n", pa, *pa); // 10
    printf("指针地址%d,指针值%d\n", pa, &pa); // 10
    int **ppa = &pa; //  a
    //  **ppa  a  10
    printf("指针地址%d,指针值%d\n", ppa,**ppa); // 10
    return 0;
}