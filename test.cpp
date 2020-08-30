#include<bits/stdc++.h>
using namespace std;
class A{
public:
    virtual void func(){
        cout<<"func in A\n";
    }
};
class B:public A{
public:
    int i=0;
    void func(){
        cout<<"func in B\n";
    }
};
void test1(){
    B b;
    cout<<INT_MIN<<" "<<b.i<<"\n";
    memset(&b.i,0x00,128);
    cout<<b.i<<"\n";
    memset(&b.i,0x00,8);
    cout<<b.i<<"\n";
    return ;
};
void test2(){
    long a=(long)(((int*)0)+4); // ?? 
    cout<<((int*)0)<<"\n";
    cout<<(((int*)0)+4)<<"\n";
    cout<<long(((long*)0)+4)<<"\n";
    cout<<a<<"\n";
}
void test3(){
    char a[]={'C','+','+'};
    char b[]={'C','+','+','\0'};
    char c[]="C++";
    char d[]="C++\0";
    char e[]="\0";
    cout<<strlen(a)<<' '<<a<<'\n'; // 7
    cout<<strlen(b)<<' '<<b<<'\n'; // 3
    cout<<strlen(c)<<' '<<c<<'\n'; // 3
    cout<<strlen(c)<<' '<<c<<'\n'; // 3
    cout<<strlen(e)<<' '<<e<<'\n'; // 0 不包含 '\0'
}
void test4(){
    int i; 
    cout<<i<<"\n";
    cout<<sizeof(i++)<<"\n"; // 编译阶段时候处理的 
    cout<<i<<"\n";    
}
void test5(){
    union{
    short s;
    char c[2]; // sizeof(short)=2;
    }un;
    un.s=0x0102;
    if(un.c[0]==1 && un.c[1]==2) cout<<"大端";
    if(un.c[0]==2 && un.c[1]==1) cout<<"小端"; // 小端 
}
void test6(){
    printf 
    #include "test.txt"
}
int main(){
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();
    return 0;
}
