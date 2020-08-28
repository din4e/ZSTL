#include<bits/stdc++.h>
using namespace std;
class A;
A *arr[2]; //
class A{
public:
    virtual int sum(int n){
        return 0;
    }
};
class B:public A{
public:
    virtual int sum(int n){
        return arr[!!n]->sum(n-1)+n; // 学会了嘛
    }
};
void test_sum_2(){
    A a;
    B b;
    arr[0]=&a;
    arr[1]=&b;
    int n;
    cin>>n;
    cout<<arr[1]->sum(n)<<"\n";
};
// 编译器计算 n 不能太深 并且 n是确定的数字
template<int n> 
struct sum_4
{
    enum val { N=sum_4<n-1>::N + n};
};
template<> 
struct sum_4<1>
{
    enum val { N=1};
};
void test_sum_4(){
    // 使用模板类计算
    cout<<sum_4<10>::N<<"\n";
}
int main(){
    test_sum_2();
    test_sum_4();
    return 0;
}