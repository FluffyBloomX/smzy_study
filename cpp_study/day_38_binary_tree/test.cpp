//
// Created by 20212 on 24-10-29.
//
//虚函数的继承是一种接口继承

//虚函数继承的是接口 重写的是实现
//重写虚函数是一种接口继承，也就可以理解为函数，返回值，参数(包括缺省参数)都是父类继承下来的，所以这里用的是父类
//的缺省参数

//需要析构函数是虚函数，实现出多态，p指向 调用谁的虚函数

//1.虚函数 -> 概念:虚函数重写是多态的条件之一
//        -> 多态原理:虚函数地址放到对象的虚表,多态指向谁调用谁的本质是运行到对象虚表找要调用的虚函数

//2.虚继承 virtual关键字 虚基表 存偏移量 解决数据冗余和二义性 虚继承语法上解决了数据冗余和二义性
//原理:将虚基类对象放在公共位置(vs是放在整个对象尾部),虚基表中存偏移量，来计算虚基类位置

//总结:记住这里两个地方都用virtual关键字，他们之间没有一点关联，不要联系到一起。
//类似这样的地方是c++语法设计不太好的地方，容易让学习者混淆，其实他们没有关联，只是用了同样的关键字