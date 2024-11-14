//
// Created by LiuYuancheng on 2024/11/14.
//
// 在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。
// 赋为 NULL 值的指针被称为空指针。
#include <stdio.h>

int main ()
{
    int *ptr = NULL;
    printf("ptr 的地址是 %p\n", ptr  );
    printf("ptr 的值是 %d\n", ptr  );
    ptr = (int *) 199;
    printf("ptr 的值是 %d\n", ptr  );
    return 0;
}