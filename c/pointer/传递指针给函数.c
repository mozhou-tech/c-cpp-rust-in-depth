//
// Created by LiuYuancheng on 2024/11/14.
//
#include <stdio.h>
#include <time.h>

//C 语言允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。

void getSeconds(unsigned long *par); // 声明一个函数

int main ()
{
    unsigned long sec;
    getSeconds( &sec );
    /* 输出实际值 */
    printf("Number of seconds: %ld\n", sec );
    return 0;
}

void getSeconds(unsigned long *par)
{
    /* 获取当前的秒数 */
    *par = time( NULL );
}