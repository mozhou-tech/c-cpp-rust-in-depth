//
// Created by LiuYuancheng on 2024/11/12.
//


#include <printf.h>
#include <stdio.h>

//eax: 通常用来执行加法，函数调用的返回值一般也放在这里面
//ebx: 数据存取
//ecx: 通常用来作为计数器，比如for循环
//edx: 读写I/O端口时，edx用来存放端口号
//esp: 栈顶指针，指向栈的顶部
//ebp: 栈底指针，指向栈的底部，通常用ebp+偏移量的形式来定位函数存放在栈中的局部变量
//esi: 字符串操作时，用于存放数据源的地址
//edi: 字符串操作时，用于存放目的地址的，和esi两个经常搭配一起使用，执行字符串的复制等操作

int main()
{
    // Declaring a register variable 'i' and initializing it
    // with 10
    // register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个字），
    // 且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
    // register 存储类定义存储在寄存器，所以变量的访问速度更快，但是它不能直接取地址，因为它不是存储在 RAM 中的。
    // 在需要频繁访问的变量上使用 register 存储类可以提高程序的运行速度。
    register int i = 10;

    printf("value %d",i);
    return 0;
}