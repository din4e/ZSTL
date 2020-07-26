#include<bits/stdc++.h>
using namespace std;
// 07.
class abase{
public:
    int i;
public:
    abase(){};
    //abase(int _i=0):i(_i){};
    //abase(const abase rhs){this=rhs;};
    //virtual ~abase()=0; // 纯虚数函数
    ~abase();//
};
// 必须提供 否则编译器报错
abase::~abase(){
    cout<<"abase dtor.\n";
};
class dobj:public abase{
public:
    int i;
public:
    dobj()=default;
    // /dobj(dobj &rhs):abase(rhs){};
    ~dobj(){cout<<"dobj dtor.\n";};
};

void f07(){
    dobj a;
}

void f12(){
    abase *pa[2]={
        new dobj(),
        new dobj()
    };
    delete pa[0];
}

int main(){
    f07();
    f12();
}