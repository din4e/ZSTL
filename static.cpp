#include<bits/stdc++.h>
#include "staticTest.h"
using namespace std;
static int i=0; // 保存在静态区 -> 内存布局
void staticFunc(){
    static int j;
    ++j;
    cout<<"Static Function 1 j = "<<j<<"\n";
}
class staticClass{
private:
    static int j;
public:
    static string s;
    static int i; // 不包含sizeof()里面，类内申明
    static void classFunc(){
        // 不创建对象就可以访问
        cout<<"Static function in staticClass.\n";
    };
};

int staticClass::j=0; // 需要在外部定义；
int staticClass::i=0; // 需要在外部定义；

int main(){
    cout<<staticClass::i<<"\n";
    //cout<<staticClass::j<<"\n"; // ERROR
    cout<<testStaticI<<"\n";
    // cout<<staticClass::s<<"\n"; // undefined reference to `staticClass::s'
    testStaticFunc();
    staticFunc();
    staticFunc();
    staticClass::classFunc();
    return 0;
}