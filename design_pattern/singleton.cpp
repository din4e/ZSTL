#include <bits/stdc++.h>
using namespace std;
// 1. 单线程安全的懒汉单例模式
class singleton1 {
public:
    static singleton1 *instance(){
        if (p == nullptr)
            p = new singleton1();
        return p;
    };
private:
    singleton1() {
        cout<<"singleton1::ctor()\n";
    }
    static singleton1 *p;
};

singleton1 *singleton1::p = nullptr; 
// singleton *singleton::p = new singleton(); // 饿汉模式

void *tfunc(int i){
    singleton1 *p=singleton1::instance();
    // cout<<"thread "<<i<<": ";
    // mutex m;  {
    //     lock_guard<mutex> lg(m);
        // cout<<"thread "<<i<<" "<<p<<" \n";
        cout<<p<<" ";
    // }
    // else cout<<"null\n";
}
void test_singleton1(){
    int n=5;
    vector<thread> t(n);
    for(int i=0;i<n;++i) t[i]=thread(tfunc,i);
    for(int i=0;i<n;++i) t[i].join();
    // cout<<&(singleton1::instance())<<"\n";
    // singleton1::instance();
}

// 2. c++11 多线程内存安全
class singleton2 {
public:
    static singleton2 *instance(){
        static singleton2 pp;
        return &pp;
    };
private:
    singleton2() {
        cout<<"singleton2::ctor()\n";
    };
};
// static singleton2 *p=nullptr;
void test_singleton2(){
    singleton2 *p1 = singleton2::instance();
    singleton2 *p2 = singleton2::instance();
    singleton2 *p3 = singleton2::instance();
    singleton2 *p4 = singleton2::instance();
    if(0){
        cout<<p1<<"\n"; 
        cout<<p2<<"\n";
        cout<<p3<<"\n";
        cout<<p4<<"\n";        
    }

}

// 3. 多线程内存安全的单例格式
class singleton3 {
public:
    static singleton3 *instance(){
        lock_guard<mutex> guard(_lock);
        if (p == nullptr)
            p = new singleton3();
        return p;
    };
private:
    singleton3() { cout<<"singleton3::ctor()\n"; }
    static singleton3 *p;
    static mutex _lock;
};
singleton3 *singleton3::p=nullptr;
mutex singleton3::_lock; // 静态变量一定要初始化

void test_singleton3(){
    singleton3 *p=singleton3::instance();
}
// 4. 双重检查锁+自动回收
class singleton4 {
public:
    static singleton4 *instance(){
        if (p == nullptr) {
            lock_guard<mutex> guard(_lock);
            if (p == nullptr)
                p = new singleton4();
        }
        return p;
    };
    // 实现一个内嵌垃圾回收类
    class Garbo{
    public:
        ~Garbo(){
            if(p){
                delete p; p=nullptr;                
            }
        }
    };
    static Garbo garbo; // 定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数从而释放单例对象
private:
    singleton4() { cout<<"singleton4::ctor()\n"; }
    static singleton4 *p;
    static mutex _lock;
};

singleton4 *singleton4::p = nullptr;
mutex singleton4::_lock;
singleton4::Garbo garbo;

void test_singleton4(){
    singleton4 *p=singleton4::instance();
    // singleton3 *p=singleton3::instance();
    cout<<p<<"\n";
}
int main(){
    test_singleton1();
    test_singleton2();
    test_singleton3();
    test_singleton4();
    return 0;
}