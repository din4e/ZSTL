#include<bits/stdc++.h>
#include "test.h"
using namespace std;
namespace zz{
    int i=0;
}

int zsqrt(int w){
    int l=0,r=w/2,m;
    while(l<r){
        m=(r+l)/2;
        if(m*m>w) r=m-1;
        else l=m+1; // l=m
        if(m*m==w) break;
    }
    return m;
}
int main(){
    // while(1){
    //     int i;
    //     cin>>i;
    //     cout<<zsqrt(i)<<"\n";
    // }
    long y;
    long long x;
    cout<<sizeof(y)<<" "<<sizeof(x)<<"\n";
}