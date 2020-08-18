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
template<typename T>
auto_pointer<T>::auto_pointer(T *p)
{

};
template<typename T>
auto_pointer<T>::auto_pointer(const auto_pointer<T> &rhs)
{

};
int main(){
    return 0;
}