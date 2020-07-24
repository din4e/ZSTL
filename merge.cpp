#include<bits/stdc++.h>
using namespace std;
void merge1(int n,int l,int r){
    cout<<n<<" "<<l<<" "<<r<<"\n";
    if(l==r) {
        return ;
    }
    if(l>r){
        return ;
    }
    int m=l+((r-l)>>1);
    merge1(n+1,l,m);
    merge1(n+1,m+1,r);
}
void merge2(int n,int l,int r){
    //cout<<n<<" "<<l<<" "<<r<<"\n";
    if(l==r) {
        return ;
    }
    if(l>r){
        return ;
    }
    int m=l+((r-l)>>1); // l=2,r=3,m=2
    cout<<m<<" "<<l<<" "<<r<<"\n";
    merge2(n+1,l,m-1); // l=2,m-1=1; l>r
    merge2(n+1,m,r);   // l=2,m=2,r=3,卡死了;
}
int main(){
    merge1(0,0,9);
    merge2(0,0,9);
}