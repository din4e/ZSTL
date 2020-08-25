#include<bits/stdc++.h>
using namespace std;
class A{
    A()=delete;
    // explicit A(const A &a)=delete; 
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

void func_A(){
    // A a; // no known conversion for argument 1 from ‘int’ to ‘const A&’
}

int main(){
    func_A();
    Base *b=new Derived();
    b->func();
    b->func(1);
    Derived *d=dynamic_cast<Derived*>(new Base());
    if(d!=nullptr) d->func();
}

