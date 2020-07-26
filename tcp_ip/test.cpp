#include<bits/stdc++.h>
#include<netinet/in.h>
#include<pthread.h>
using namespace std;
int main(){
    //cout<<"FINISHED.";
    vector<int> v(11);
    for(int i=0;i<12;i++){
        v.push_back(i);
        cout<<v.capacity()<<"\n";
    }
    
    return 0;
}