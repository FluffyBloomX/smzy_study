//
// Created by 20212 on 27/8/2024.
//
#include <iostream>
//1.输出型参数（里面改变了，外面可以拿得到）
//2.提高效率
using namespace std;
//引用在底层是用指针的方式实现的
//引用必须要初始化
//指针不用
//有空指针不存在空引用
//引用一个实体之后，不能再引用别的实体
int main(){
    int a = 10;
    int& b = a;
    int c = 10;
    b = c;//
}
//有多级指针没有多级引用