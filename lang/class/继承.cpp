/*
 * @Author: liuyuancheng tenstone@foxmail.com
 * @Date: 2024-11-15 10:42:15
 * @LastEditors: liuyuancheng tenstone@foxmail.com
 * @LastEditTime: 2024-11-15 11:38:43
 * @FilePath: /c-cpp-rust-in-depth/lang/class/继承.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

//
// Created by LiuYuancheng on 2024/11/15.
//
#include <ostream>
class Animal {
public:
    void eat() {
        printf("eat\n");
    }
};

class Dog : public Animal {
public:

    void bark() {
        printf("bark\n");
    }
};

int main() {
    Animal animal;
    animal.eat();
    Dog dog;
    dog.eat();
    dog.bark();
    return 0;
}