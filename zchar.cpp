#include<bits/stdc++.h>
using namespace std;
char * zstrcpy(char *strDest, const char *strSrc){
    assert((strDest!=NULL)&&strSrc!=NULL);// assert 
    char *address=strDest;
    while((*strDest++ =* strSrc++) !='\0' );
    return address;
}
void test_zstrcpy(){
    char c[10]="sdas";
    char s[10]="";
    cout<<zstrcpy(s,c)<<"\n";
}
void test_minus(){
    char x[4]="123";
    char y[8]="2131231";
    cout<<y<<"\n";
    cout<<y[-1]<<"\n"; // y[-1]
}
int main(){
    test_zstrcpy();
    test_minus();
    return 0;
}