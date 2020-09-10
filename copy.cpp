#include<bits/stdc++.h>
using namespace std;
// struct内部持有一个vector,拷贝struct实例时候会发生深拷贝还是浅拷贝? map呢? 都是深拷贝 vector自身就是完全杜绝浅拷贝
struct A{
    vector<int>  v; // 24 8*3
    map<int,int> m; // 48
}; // 72 
int main(){
    A a,b;
    b=a;
    cout<<sizeof(A)<<" "<<sizeof(a.m)<<"\n";
    cout<<&a<<" "<<&(a.v)<<" "<<&(a.m)<<"\n";
    cout<<&b<<" "<<&(b.v)<<" "<<&(b.m)<<"\n";
    // 0xffffcbb0 0xffffcbb0 0xffffcbc8 
    // 0xffffcb60 0xffffcb60 0xffffcb78 
}