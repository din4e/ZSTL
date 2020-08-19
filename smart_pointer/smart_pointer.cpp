#include<bits/stdc++.h>
using namespace std;

template<typename T>
class smart_pointer{
public:
    smart_pointer(T *p){

    };
    smart_pointer(const smart_pointer<T> &rhs){

    };
    template<typename T2>
    smart_pointer(const smart_pointer<T2> &rhs){

    };
private:
    T *ptr;
    int cnt;
};

int main(){

    return 0;
}