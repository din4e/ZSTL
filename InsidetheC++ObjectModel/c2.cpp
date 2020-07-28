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

// 带 Dafault Constructor 的 Member Class Object
void func2_1(){
    D d1(1);  // 注意初始化顺序
    D d2();   // 没有初始化 无法输出 
    D d3;     // 不加 error    
    cout<<d1.b.i<<endl;
    // cout<<d2.b.i<<endl; // error 而后者具有非类类型‘D()’
    cout<<d3.b.i<<endl;
}
int main(){
    func2_1(); 
    cout<<"Inside the C++ Object Model: Chapter 2\n";
}