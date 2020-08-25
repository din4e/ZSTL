#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[]="hello";
    char s2[]="hello";
    char *s3="hello";
    char *s4="hello"; 
    if(s1==s2) cout<<"s1==s2\n"; // s1==s2
    else cout<<"s1!=s2\n";
    if(s3==s4) cout<<"s3==s4\n"; // s3==s4
    else cout<<"s3!=s4\n";
    return 0;
}
