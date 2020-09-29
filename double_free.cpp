# include <bits/stdc++.h>
using namespace std;
void double_free(){
    int *p=(int*)malloc(sizeof(int));
    free(p);
    free(p); 
    // 0 [main] a 1843 cygwin_exception::open_stackdumpfile: Dumping stack trace to a.exe.stackdump
    // sem value = 0
}
int main(){
    double_free();
    return 0;
}