//
// Created by LiuYuancheng on 2024/11/14.
//
#include <stdio.h>

/* 函数声明 */
void func1(void);

// 局部变量：在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
//static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
static int count=10;        /* 全局变量 - static 是默认的 */

int main()
{
    while (count--) {
        func1();
    }
    return 0;
}

void func1(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */
    static int thingy=5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}