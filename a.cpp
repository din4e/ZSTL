#include<bits/stdc++.h>
using namespace std;
struct node{
    long data;
    node *next=nullptr;
};
struct znode{
    int data;
    vector<int> nei;    
};
znode *networks;
vector<node> v;
int main(){
    int c;
    cout<<sizeof(v)<<endl;
    cout<<sizeof(v[0])<<endl;
    cout<<sizeof(v.capacity())<<endl;
    //a;//error
}