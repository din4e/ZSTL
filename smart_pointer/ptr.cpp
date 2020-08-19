#include<bits/stdc++.h>
using namespace std;
void func_null(){
    int *p = nullptr; // int *p; // Dump
    printf("ptr addr : %d\n",p);
    // printf("ptr val : %d\n",*p); // 
    delete p;
}
void func_auto_ptr(){
    // string s1("hello");
    // auto_ptr<string> ptr_s(&s1); // open_stackdumnp
    // int i=10;
    // auto_ptr<int> ptr_i(&i); // open_stackdumnp
}
void func_unique_ptr(){
    unique_ptr<string> up1(new string ("hello"));
    unique_ptr<string> up2;

    // up2 = up1;// #1 not allowed 复制符号已经被删除
    up2 = move(up1); // allowed 
    unique_ptr<string> up3;
    up3 = unique_ptr<string>(new string ("You"));// #2 allowed
    void* ptr_void;
    cout<<"sizof(void*) = "<<sizeof(ptr_void)<<'\n'; // 8
    shared_ptr<string> sp1;
    if(!sp1) cout<<"sp1 empty.\n";
    //if(sp1->empty()) cout<<"sp1 empty.\n"; // error
    
    //shared_ptr<int> sp2 = new int(1024); // 错误：没有使用显示形式 
    shared_ptr<int> sp3(new int(1024)); // 正确：必须使用显示形式
    cout<<"finished.\n";    
}
int main(){
    // func_null();
    // func_auto_ptr();
    func_unique_ptr();
    return 0;
}
