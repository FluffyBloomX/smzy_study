//
// Created by 20212 on 3/13/2024.
//
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//写一个函数 判断是不是素数
#include <stdio.h>
int main() {
    int i = 0;
    for (i = 100; i < 1000; i++) {
        printf("%d\n", i);
    }
    return 0;
}
//传址调用让外部变量与函数体建立起联系