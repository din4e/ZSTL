#include<bits/stdc++.h>
using namespace std;
class A{
    A()=delete;
    // explicit A(const A &a)=delete; 
};
void func_A(){
    // A a(1); // no known conversion for argument 1 from ‘int’ to ‘const A&’
}
int main(){
}