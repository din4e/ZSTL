#include<iostream>
#include<vector>
using namespace std;
template<class T>
class ListNode{
public:
    T val;
    ListNode *next;
    
    //T(/* args */);
    //~T();
};
// struct ListNode{

// };
int main(){
    vector<float> f({1.0,2.0,3.0});
    ListNode<int> l;
    auto *p=&l;//new ListNode<int>;
    cout<<p<<" "<<&l<<"\n"; //输出指针地址不需要改变类型
    // node *head=&l;
    // for(auto it:f){
    //     node tmpl;
    //     head->v=it;
    //     head->next=new node;
    //     head = head.next;
    // }
    // while(l.next!=NULL){
    //     cout<<l.v;
    //     l=*(l.next);
    // }
}
