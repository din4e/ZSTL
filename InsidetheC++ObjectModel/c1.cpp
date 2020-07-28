#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(){cout<<"A ctor.\n";};
};
class B{
public:
    int i;
    B(int _i=0):i(_i){cout<<"B ctor.\n";};
};
class C{
public:
    C(){cout<<"C ctor.\n";};
};
class D{
public:
    A a;
    B b;
    C c;
    D(int _i=0):b(_i){
        cout<<"D ctor.\n";
    };
};

void func1(){
    // 加上封装后并没有增加成本 
    // 主要负担是由虚函数 运行时绑定 以及抽象类 继承 引起的
}
void func1_1(){
    // C++对象模型：两类成员变量 静态变量 非静态变量
    // 三类成员函数 静态函数 非静态函数 虚函数

    // vptr的设置及重置 在每个class的ctor dtor copy assignment中完成
}
void func1_3(){
    // 支持的三种多态：
    // 1. 隐式转变 派生类指针转变成基类指针
    // 2. 虚函数实现
    // 3. dynamic_cast 以及 typeid

    // C++通过 类的指针以及应用来实现多态
}
int main(){
    cout<<"Inside the C++ Object Model: Chapter 1\n";
}