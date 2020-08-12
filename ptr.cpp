#include<bits/stdc++.h>
using namespace std;
int main(){
    //string s1("hello");
    //auto_ptr<string> ptr_s(&s1); // open_stackdumnp
    
    unique_ptr<string> up1(new string ("hello"));
    unique_ptr<string> up2;

    // up2 = up1;// #1 not allowed = 使用了被删除的函数
    up2 =move(up1); // allowed 
    unique_ptr<string> up3;
    up3 = unique_ptr<string>(new string ("You"));// #2 allowed
    void* ptr_void;
    cout<<"sizof(void*) = "<<sizeof(ptr_void)<<'\n'; // 8
    shared_ptr<string> sp1;
    if(!sp1) cout<<"sp1 empty.\n";
    //if(sp1->empty()) cout<<"sp1 empty.\n"; // error
    
    //shared_ptr<int> sp2 = new int(1024); // 错误：必须使用直接初始化形式
    shared_ptr<int> sp3(new int(1024)); // 正确：使用了直接初始化形式
    cout<<"finished.\n";
    return 0;
}
//https://blog.csdn.net/ypshowm/article/details/89034855
