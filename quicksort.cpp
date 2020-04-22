#include<iostream>
#include<vector>
#include<cstdio>
#include<stdlib.h>
using namespace std;

void quicksortv1(vector<int> &a,int l,int r){
    if(l>=r) return;
    int ll=l,rr=r;cout<<l<<" "<<r<<"\n";
    int key=a[l];
    while(l<r){
        while(a[r]>key&&l<r) r--;
        a[l]=a[r];
        while(a[l]<=key&&l<r) l++;
        a[r]=a[l];
    }
    a[l]=key;
    quicksortv1(a,ll,l-1);
    quicksortv1(a,l+1,rr);
}

vector<int> sl,sr;
int top=0;
void push(int a,int b){
    sl[top]=a;
    sr[top++]=b;
}
void pop(int& a, int& b){
    a=sl[--top];
    b=sr[top];
}
void quicksortv2(vector<int> &a,int l,int r){
    if(l>=r) return;
    push(l,r);
    while(top){
        pop(l,r);
        int ll=l;
        int rr=r;
        int key=a[l];
        while(l<r){
            while(a[r]>key&&l<r) r--;
            a[l]=a[r];
            while(a[l]<=key&&l<r) l++;
            a[r]=a[l];
        }
        a[l]=key;
        if(ll<l-1) push(ll,l-1);
        if(l+1<rr) push(l+1,rr);
    }
}
int main(){
    vector<int> a={9,8,7,6,6,5,4,3,2,1,0};
    for(auto it:a) cout<<it<<" ";cout<<"\n";
    sl.resize(a.size());
    sr.resize(a.size());
    quicksortv2(a,0,a.size()-1);
    for(auto it:a) cout<<it<<" ";cout<<"\n";
    system("pause");
    return 0;
}
