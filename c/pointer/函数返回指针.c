//
// Created by LiuYuancheng on 2024/11/14.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 要生成和返回随机数的函数 */
// 不要返回局部变量的指针。局部变量在函数结束时被销毁，因此返回它们的地址将导致未定义行为。
int * getRandom( )
{
    static int  r[10];
    int i;
    /* 设置种子 */
    srand((unsigned)time(NULL));
    for ( i = 0; i < 10; ++i){
        r[i] = rand();
        printf("%d->%d\n", i,r[i] );
    }
    return r;
}

/* 要调用上面定义函数的主函数 */
int main ()
{
    /* 一个指向整数的指针 */
    int *p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++ )
    {
        printf("*(p + [%d]) : %d\n", i, *(p + i) );
    }
    return 0;
}