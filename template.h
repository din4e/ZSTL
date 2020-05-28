#pragma once
#include<iostream>
#include<vector>

template <class... T>
void f(T... args)
{
    std::cout << sizeof...(args) << std::endl; 
}

void testTemplate() {
    std::cout << "testTemplate()\n";
    f();               // 0
    f(1, 2);           // 2
    f(1, 2.5, " ");    // 3
    std::vector<int> v(4, 1);
    f(v); // 1
}