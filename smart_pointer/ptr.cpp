#include<bits/stdc++.h>
using namespace std;
void func_null(){
    int *p = nullptr; // int *p; // Dump
    printf("ptr addr : %d\n",p);
    // printf("ptr val : %d\n",*p); // Dumping
    delete p;

    void* ptr_void;
    cout<<"sizof(void*) = "<<sizeof(ptr_void)<<'\n'; // 8  
}
void func_ptr(){
    char *dp ;//= NULL;
    cout<<dp<<"\n";
    for(int i=0;i<1;i++) {
        char c;
        dp = &c;
        cout<<dp<<"\n";
    }
}
void func_auto_ptr(){
    // string s1("hello");
    // auto_ptr<string> ptr_s(&s1); // open_stackdumnp
    // int i=10;
    // auto_ptr<int> ptr_i(&i); // open_stackdumnp
}
void test_unique_ptr(){
    unique_ptr<string> up1(new string ("hello"));
    unique_ptr<string> up2;
    unique_ptr<string> up3;
    // up2 = up1;// #1 not allowed 复制符号已经被删除
    up2 = move(up1); // allowed 
    up3 = unique_ptr<string>(new string ("You"));// #2 allowed

    int *x(new int());
    unique_ptr<int> up4,up5;
   
    up4.reset(x); //会使up1 up2指向同一个内存
    // up5.reset(x); // Dumping stack 

}
void test_shared_ptr(){
    shared_ptr<string> sp1;
    if(!sp1) cout<<"sp1 empty.\n";
    //if(sp1->empty()) cout<<"sp1 empty.\n"; // error
    //shared_ptr<int> sp2 = new int(1024); // 错误：没有使用显示形式 
    shared_ptr<int> sp3(new int(1024));    // 正确：必须使用显示形式
}
void func(shared_ptr<int> p){
    *p=5;
}
void test_shared_ptr2(){
    int arr=6;
    for(int i=0;i<100;++i){
        shared_ptr<int> p=make_shared<int>(arr);
        func(p);
        cout<<*p<<" "<<p.use_count()<<"|";
    }
    cout<<"\n"; // baidu
}
int main(){
    // func_null();
    // func_ptr();
    // func_auto_ptr();

    // test_unique_ptr();
    // test_shared_ptr();
    test_shared_ptr2();
    return 0;
}
