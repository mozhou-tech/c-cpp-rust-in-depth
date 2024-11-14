//
// Created by LiuYuancheng on 2024/11/14.
//


#include <printf.h>
#include <typeinfo.h>

int main(){
    int a = 9;
    typeof(a) b = 8;
    printf("Type of b is: %sn", typeid(b).name());
}