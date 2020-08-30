#include <bits/stdc++.h>
using namespace std;
void func(string s){
    cout<<&s<<"\n";
    s="func()"; // 0xffffcbc8
    cout<<s<<"\n";
}
void test_string(){
    string s;
    cout<<&s<<"\n"; // 0xffffcbc0
    func(s);
    cout<<s<<"\n";
}
int main(){
    test_string();
    return 0;
}