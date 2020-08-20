#include<bits/stdc++.h>
using namespace std;
void func_vector(){
    vector<int> m;
    for(int i=0;i<32;++i){
        cout<<m.capacity()<<" ";
        m.push_back(1);        
    }
    // 0 1 2 4 4 8 8 8 8 16 16 16 16 16 16 16 16 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32
}
int main(){
    func_vector();
    return 0;
}