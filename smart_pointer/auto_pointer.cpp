#include<bits/stdc++.h>
using namespace std;

template<typename T>
class auto_pointer{
public:
    auto_pointer(T *p);
    auto_pointer(const auto_pointer<T> &rhs);
private:
    T *ptr;
    int cnt;
};
// template<typename T>
// auto_pointer<T>::auto_pointer(T *p)
// {

// };
// template<typename T>
// auto_pointer<T>::auto_pointer(const auto_pointer<T> &rhs)
// {

// };
void func_auto_ptr_test(){
    std::auto_ptr<int> ptr1(new int(10));
    std::auto_ptr<int> ptr2 = ptr1;
    printf("ptr1 addr : 0x%x\n", &ptr1); // cout<<"ptr1 addr : "<<&ptr1<<"\n";
    printf("ptr2 addr : 0x%x\n", &ptr2); // cout<<"ptr2 addr : "<<&ptr2<<"\n";
    printf("ptr2 val : %d\n" , *ptr2); // 此时应输出 0
    //printf("pt1 val:%d\n", *pt1);    // 错误, 对象已释放
    
}
int main(){
    func_auto_ptr_test();
    malloc();
    return 0;
}