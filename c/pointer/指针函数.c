#include <printf.h>
#include <malloc/_malloc.h>
#include <_string.h>

//
// Created by LiuYuancheng on 2024/11/14.
//
int *f(int a, int b); // 声明指针函数
int main(int argc, char* argv[])
{
    printf("------------------------------ Start\n");

    int *p1 = NULL;
    printf("The memeory address of p1 = 0x%x \n", p1);

    p1 = f(1, 2);

    printf("The memeory address of p1 = 0x%x \n", p1);
    printf("*p1 = %d \n", *p1);

    printf("------------------------------ End\n");
    getchar();
    return 0;
}

/*指针函数的定义，返回值是指针类型int */
int *f(int a, int b) {
    int *p = (int *)malloc(sizeof(int));
    printf("The memeory address of p = 0x%x \n", p);
    memset(p, 0, sizeof(int));
    *p = a + b;
    printf("*p = %d \n", *p);

    return p;
}