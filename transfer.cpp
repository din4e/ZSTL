#include <bits/stdc++.h>
using namespace std;

void func1(){
    unordered_map<int,int> m;
    for(int i=0;i<5;++i) m[i]=i;
    vector<pair<int,int> > v1(m.begin(),m.end());
    for(auto it:v1) cout<<it.first<<" "<<it.second<<"\n";cout<<"\n";
}
void func2(){
    map<int,int> m;
    for(int i=0;i<5;++i) m[i]=i;
    vector<pair<int,int> > v1(m.begin(),m.end());
    for(auto it:v1) cout<<it.first<<" "<<it.second<<"\n";cout<<"\n";
}
void func3(){
    set<int> m;
    for(int i=0;i<5;++i) m.insert(i);
    vector<int> v1(m.begin(),m.end());
    for(auto it:v1) cout<<it<<"\n";cout<<"\n";
}
void func4(){
    unordered_set<int> m;
    for(int i=0;i<5;++i) m.insert(i);
    vector<int> v1(m.begin(),m.end());
    for(auto it:v1) cout<<it<<"\n";cout<<"\n";
}
int main(){
    //func1();
    //func2();
    // func3();
    func4();
}