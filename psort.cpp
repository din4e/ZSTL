#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a({7,6,5,4,3,2,1});
    int b[8]={9,8,7,6,5,4,3,2};
    for(auto it:a) cout<<it<<" ";cout<<"\n";
    sort(a.begin()+3,a.end()-1);
    for(auto it:a) cout<<it<<" ";   cout<<"\n"; 

    for(int i=0;i<8;++i) cout<<b[i]<<" ";cout<<"\n";
    sort(b+4,b+8);
    for(int i=0;i<8;++i) cout<<b[i]<<" ";cout<<"\n";
}