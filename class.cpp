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

int main(){
    test_AB();
    test_BaseAndDerived();
}

