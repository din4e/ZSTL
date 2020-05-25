#include<iostream>
#include<vector>
using namespace std;
struct node{
    float v=0;
    node *next=NULL;
    /* data */
};

int main(){
    vector<float> f({1.0,2.0,3.0});
    node l;
    node *head=&l;
    for(auto it:f){
        node tmpl;
        head->v=it;
        head->next=new node;
        head = head.next;
    }
    while(l.next!=NULL){
        cout<<l.v;
        l=*(l.next);
    }
}
