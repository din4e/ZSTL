# include <bits/stdc++.h>
using namespace std;
struct Node{
    int i;
    Node* next;
};
void test_unordered_map(){
    Node* n1=new Node();
    unordered_map<Node*,bool> m;
    if(m[n1]) cout<<"True\n";
    else cout<<"False\n";
    return 0;
}
int main(){
    test_unordered_map();
}