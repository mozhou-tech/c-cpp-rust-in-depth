//
// Created by LiuYuancheng on 2024/11/14.
//


#include <printf.h>
#include <typeinfo>  // 在cpp中才有

int main(){
    int a = 9;
    typeof(a) b = 8;
    printf("输出： %d，类型 %s\n",b, typeid(b).name());
    return 0;
}