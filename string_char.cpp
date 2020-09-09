#include<bits/stdc++.h>
using namespace std;
void test1(){
    char s1[]="hello";
    char s2[]="hello";
    char *s3="hello";
    char *s4="hello"; 
    if(s1==s2) cout<<"s1==s2\n"; // s1!=s2
    else cout<<"s1!=s2\n";
    if(s3==s4) cout<<"s3==s4\n"; // s3==s4
    else cout<<"s3!=s4\n";    
}
void test2(){
    char maxhub[]="maxhub\0\0\x11\\";
    cout<<sizeof(maxhub)<<" "<<strlen(maxhub)<<" "<<sizeof(maxhub+1)<<"\n"; // 11/6/8
}
int main(){
    // test1();
    test2();
    return 0;
}
