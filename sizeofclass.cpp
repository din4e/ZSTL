#include<bits/stdc++.h>
using namespace std;
class A{
    int i=0;
    char c;
    void x(){

    };
    virtual y(){};
    virtual z(){};
};
class B{
    int i;
    int j;
    void x(){

    };
    virtual y(){};
    virtual z(){};
};
class C{
    int i;
    int j;
    void x(){

    };
    // virtual y(){};
    // virtual z(){};
};
class D{
    // int i;
    // int j;
    // void x(){

    // };
    virtual y(){};
    // virtual z(){};
};
class E{

}; 
//一、定义一个空的类型，对于其对象我们sizeof其大小，是1字节。因为我们定义一个类型，编译器必须为其分配空间，具体分配多少是编译器决定，vs是1字节,分配在栈区。
int main(){
    A a;
    B b;
    C c;
    D d;
    E e;
    cout<<sizeof(a)<<"\n"; // 16
    cout<<sizeof(b)<<"\n"; // 16 
    cout<<sizeof(c)<<"\n"; // 8 4+4
    cout<<sizeof(d)<<"\n"; // 8
    cout<<sizeof(e)<<"\n"; // 1
    // cout<<a.i<<"\n"; // error
    return 0;    
}