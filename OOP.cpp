# include<bits/stdc++.h>
using namespace std;
class A
{
public:
    explicit A(int i = 5, int j = 10) // 这里用explicit关键词来修饰类构造函数.
    {
        m_a = i;
        m_b = j;
    }
public:
    int m_a;
    int m_b;
};

void func_explicit()
{
    A s;
    cout<<s.m_a<<" "<<s.m_b<<"\n";
    // 这样直接赋值,会被提示错误,因为explicit抑制隐式转换的进行
    // s = 10;//这样会报错!!!
    // 当然显示转换还是可以的.
    s = A(20);
    cout<<s.m_a<<" "<<s.m_b<<"\n";
}
int main(){
    func_explicit();
    return 0;
}