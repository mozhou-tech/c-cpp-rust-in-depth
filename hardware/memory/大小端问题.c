// 检查当前系统是大端字节序还是小端字节序
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1 代表小端字节序，0 代表大端字节序
// 一般一个16位（双字节）的数据，比如 FF1A （16进制）
// 那么高位字节就是FF，低位是1A
int check_sys()
{
    // 1  1  00000001h
    int a = 1;
    //  &a  a  ,  (char*)&a  a  ,  a  低字节
    return *(char*)&a;  // 强制转换，高字节丢失
}
int main()
{
    int ret = check_sys();
    if (1 == ret){
        // 小端是高字节存放到内存的高地址
        printf("小端字节序存储模式\n");
    }else{
        // 大端是高字节存放到内存的低地址
        printf("大端字节序存储模式\n");
    }
    return 0;
}