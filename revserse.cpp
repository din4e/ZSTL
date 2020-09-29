#include<bits/stdc++.h>
using namespace std;
void reverse(char *s){
    char *p=s;
    char *q=s+strlen(s)-1;
    while(p<q)
        swap(*p++,*q--);
}
int main(){
    char c[]="123124145645";
    string s(c);
    cout<<c<<"\n";
    reverse(c);
    reverse(s.c_str());
    cout<<c<<"\n";
    cout<<s<<'\n';
    return 0;
}