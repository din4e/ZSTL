#include<bits/stdc++.h>
using namespace std;
// struct内部持有一个vector,拷贝struct实例时候会发生深拷贝还是浅拷贝?map呢?
struct A{
    vector<int>  v; // 24 8*3
    map<int,int> m; 
};
int main(){
    A a,b;
    b=a;
    cout<<&a<<" "<<&a.v<<" "<<&a.m<<"\n";
    cout<<&b<<" "<<&b.v<<" "<<&b.m<<"\n";
}