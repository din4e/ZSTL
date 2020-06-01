#include<bits/stdc++.h>
using namespace std;
struct node{
    long data;
    node *next=nullptr;
};
struct znode{
    int data; //4
    vector<int> nei; //28
};
znode networks;
vector<node> v;
int main(){
    int c;
    cout<<sizeof(v)<<endl;
    cout<<sizeof(v[0])<<endl;
    cout<<sizeof(v.capacity())<<endl;
    //cout<<sizeof(*networks)<<endl;
    cout<<sizeof(networks.nei)<<endl;
    cout<<networks.nei.capacity()<<endl;
    //a;//error
}