#pragma once
#include<iostream>
#include<vector>

template <class... T>
void f(T... args)
{
    std::cout << sizeof...(args) << std::endl; //打印变参的个数
}

void testTemplate() {
    std::cout << "Hello World!\n";
    f();               // 0
    f(1, 2);           // 2
    //f(1, 2.5, " ");    // 3
    std::vector<int> v(4, 1);
    f(v);
}