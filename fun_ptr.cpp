#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int m=0;
    for(int i=0;i<n;++i)
        m+=i;
    return m;
}
int func1(int n,int(*f)(int)){
    return (*f)(n);
}
int func2(int n,int(*f)(int)){
    return f(n);
}
int main(){
    cout<< func1(10,sum)<<"\n";
    cout<< func2(11,sum)<<"\n";
    return 0;
}