#include<bits/stdc++.h>
using namespace std;
class A{
public:
    virtual void func(){
        cout<<"func in A\n";
    }
};
class B:public A{
public:
    int i=0;
    void func(){
        cout<<"func in B\n";
    }
};
void test(){
    B b;
    cout<<INT_MIN<<" "<<b.i<<"\n";
    memset(&b.i,0x00,128);
    cout<<b.i<<"\n";
    memset(&b.i,0x00,8);
    cout<<b.i<<"\n";
    return ;
};
void test2(){
    long a=(long)(((int*)0)+4); // ?? 
    cout<<((int*)0)<<"\n";
    cout<<(((int*)0)+4)<<"\n";
    cout<<long(((long*)0)+4)<<"\n";
    cout<<a<<"\n";    
}
int main(){
    int i; 
    cout<<i<<"\n";
    cout<<sizeof(i++)<<"\n"; // 编译阶段时候处理的 
    cout<<i<<"\n";
    return 0;
}
