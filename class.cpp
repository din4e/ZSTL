#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A()=delete;
    A(int i){};
    // explicit A(const A &a)=delete; 
};

class B{
public:
    // virtual B(); // constructors cannot be declared ‘virtual’ [-fpermissive]
};

class Base{
public:
    virtual void func(){
        cout<<"Base::func()\n";
    }
    void func(int val){
        cout<<"Base::func(val)\n";
    }
};
class Derived: public Base{
public:    
    void func(){
        cout<<"Derived::func()\n";
    }
};

void test_AB(){
    A a(1); // A a; // no known conversion for argument 1 from ‘int’ to ‘const A&’
    // B b; // constructors cannot be declared ‘virtual’ [-fpermissive]
}

void test_BaseAndDerived(){
    Base *b=new Derived();
    b->func();
    b->func(1);
    Derived *d=dynamic_cast<Derived*>(new Base());
    if(d!=nullptr) d->func();
}

class AA{
public:
    int i;
};
class BB:public AA{
public:
    int i;
};
class CC:public AA{
public:
    int i;
};
class DD:public BB, public CC {
public:
    int i;
};
void test_ABCD(){ // 菱形继承
    cout<<"sizeof AA:"<<sizeof(AA)<<"\n"; // 4
    cout<<"sizeof BB:"<<sizeof(BB)<<"\n"; // 8
    cout<<"sizeof CC:"<<sizeof(CC)<<"\n"; // 8
    cout<<"sizeof DD:"<<sizeof(DD)<<"\n"; // 20
    DD d;
    // cout<<d.AA::i<<"\n"; // 错误：‘AA’是‘DD’的有歧义的基类
    // cout<<d.BB::AA::i<<"\n"; // 错误：‘AA’是‘DD’的有歧义的基类
    // cout<<d.AA::BB::i<<"\n"; // 错误：‘AA::BB’尚未声明
    cout<<d.BB::i<<"\n";
    cout<<d.CC::i<<"\n";
    cout<<d.i<<"\n";
}

class AAA{
public:
    int i;
};
class BBB:virtual public AAA{
public:
    int i;
};
class CCC:virtual public AAA{
public:
    int i;
};
class DDD:public BBB, public CCC {
public:
    int i;
};
void test_ABCD2(){ // 菱形继承
    cout<<"sizeof AAA:"<<sizeof(AAA)<<"\n"; // 4
    cout<<"sizeof BBB:"<<sizeof(BBB)<<"\n"; // 8->16 8+8
    cout<<"sizeof CCC:"<<sizeof(CCC)<<"\n"; // 8->16 8+8
    cout<<"sizeof DDD:"<<sizeof(DDD)<<"\n"; // 20->40 !!!
    DDD d;
    // cout<<d.AAA::BBB::i<<"\n"; // 错误：‘AAA::BBB’尚未声明
    cout<<d.AAA::i<<"\n";
    cout<<d.BBB::i<<"\n";
    cout<<d.CCC::i<<"\n";
    cout<<d.BBB::i<<"\n";
    cout<<d.CCC::i<<"\n";
    d.AAA::i=1;
    d.BBB::AAA::i=2;
    cout<<d.AAA::i<<" "<<d.BBB::AAA::i<<" "<<d.CCC::AAA::i<<"\n";
    cout<<d.i<<"\n";
    cout<<&(d.AAA::i)<<" "<<&(d.BBB::i)<<" "<<&(d.i)<<"\n"; // 0xffffcbd0 0xffffcbb8 0xffffcbcc 24 20
}
int main(){
    // test_AB();
    // test_BaseAndDerived();
    // test_ABCD();
    test_ABCD2();
}

