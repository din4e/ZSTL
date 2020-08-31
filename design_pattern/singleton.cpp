#include <bits/stdc++.h>
using namespace std;
class singleton1 {
private:
    singleton1() {
        cout<<"singleton1::ctor()\n";
    }
    static singleton1 *p;
public:
    static singleton1 *instance(){
        if (p == nullptr)
            p = new singleton1();
        return p;
    };
};

singleton1 *singleton1::p = nullptr;
// singleton *singleton::p = new singleton(); // 饿汉模式
void test_singleton1(){
    //thread t1(singleton1::instance);
    //thread t2(singleton1::instance);
    // cout<<&(singleton1::instance())<<"\n";
    singleton1::instance();
}

class singleton2 {
private:
    singleton2() {
        cout<<"singleton2::ctor()\n";
        // cout<<&p<<"\n";
    }
    //static singleton2 *p;
public:
    static singleton2 *instance(){
        static singleton2 pp;
        return &pp;
    };
};
// static singleton2 *p=nullptr;
void test_singleton2(){
    singleton2 *p = singleton2::instance();
    cout<<&p<<"\n";
}
int main(){
    test_singleton1();
    test_singleton2();
    return 0;
}