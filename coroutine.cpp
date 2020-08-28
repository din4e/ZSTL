#include <bits/stdc++.h>
#include <stdio.h>
#include <setjmp.h>
using namespace std;

jmp_buf buf;

banana()
{
    printf("in banana() \n");
    longjmp(buf,1);
    printf("you'll never see this,because i longjmp'd");
}

void test_jmp(){
    if(setjmp(buf))
        printf("back in test_jmp()\n");
    else
    {
        printf("first time through\n");
        banana();
    }
}

int main(){
    test_jmp();
    return 0;
}