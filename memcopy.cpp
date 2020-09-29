#include<bits/stdc++.h>
using namespace std;
void  *memcpy(void *dest, const void *src, size_t count){
    assert(dest != NULL && src != NULL);
    char *tmp = (char *)dest;
    char *p = (char *)src;
    while (count--) *tmp++ = *p++;
    return dest;
}
void *memmove(void *dst, const void *src, size_t count){
    assert(dst != NULL && src != NULL);
    if (dst < src) {
        char *p = (char *)dst;
        char *q = (char *)src;
        while (count--) *p++ = *q++;
    }
    else{
        char *p = (char *)dst + count;
        char *q = (char *)src + count;
        while (count--) *--p = *--q;
    }
    return dst;
}
char * strcpy(char *strDest, const char *strSrc){
    assert((strDest!=NULL)&&(strSrc!=NULL));// assert 
    char *address=strDest;
    while((*strDest++ =* strSrc++) !='\0' );
    return address;
}
int main(){
    char a[]="1232141",b[10];
    char *pa=a,*pb=NULL;
    cout<<memcpy(pb,pa,7)<<"\n";
    // pb=(a+2);
    // memcpy(pb,pa,strlen(a));
    // a="1232141";
    
    // cout<<a<<"\n";
    // memmove(pb,pa,strlen(a));
    // cout<<a<<"\n";
    return 0;
}