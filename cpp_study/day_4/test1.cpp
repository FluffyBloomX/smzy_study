//
// Created by 20212 on 20/8/2024.
//
#include <iostream
using namespace std;

//引用做返回值
int main(){
    return 0;
    //传值返回和传引用返回
    //传值返回 -> n的临时变量 临时变量具有常性
    //传引用返回 ->n的别名

//    说明如果返回变量c是一个局部变量时，引用返回不安全
//加一个static 可以延长局部变量的生命周期
//如果一个函数要使用引用返回，返回变量出了这个函数的作用域还在，就可以使用引用返回，否则就不行，不安全
//函数使用引用返回的好处的是少创建一个临时变量，可以提高效率
//引用返回的目的是减少拷贝，提高程序效率

//全局变量,静态变量可以使用引用返回
}