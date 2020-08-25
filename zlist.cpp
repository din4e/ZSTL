#include <bits/stdc++.h>
class List{
public:
    List(int n=10):size(n){
        p=(int*)malloc(n*sizeof(int));
    };
    List(const List& rp){
        //if(rp.p==p) return; // 多余，考官提醒
        //free(p); // 多余，考官提醒
        p=(int*)malloc(rp.size*sizeof(int));
        memcpy(p,rp.p,rp.size*sizeof(int));
        size=rp.size;
        cur=rp.cur;
    };
    List& operator=(const List& rp){ 
        if(rp.p==p) return *this; // 忘记return了，考官提醒
        free(p);
        p=(int*)malloc(rp.size*sizeof(int));
        memcpy(p,rp.p,rp.size*sizeof(int)); // 忘记*size，考官提醒
        size=rp.size;
        cur=rp.cur;
        return *this; // 忘记return了，考官提醒
    };
    void push_back(int i){
        if(cur>=size) {
            int *tmpp=(int*)malloc(2*size*sizeof(int));
            memcpy(tmpp,p,size*sizeof(int));
            free(p);
            size*=2;
            p=tmpp;
        }
        *(p+cur)=i;
        ++cur;
    }
    ~List(){
        free(p);
        size=0;
    };
// private:
    int  size=0;
    int  cur=0;
    int  *p=nullptr;
};
using namespace std;
int main() {
    List l1;
    cout<<l1.size<<" "<<l1.cur<<"\n";
    for(int i=0;i<100;++i)
        l1.push_back(i);
    List l2;
    l2=l1;
    for(int i=0;i<l2.cur;++i)
        cout<<*(l2.p+i)<<" ";
    cout<<"\n";
    cout<<l2.size<<" "<<l2.cur<<"\n";    
}