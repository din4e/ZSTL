// https://blog.csdn.net/trojanpizza/article/details/6656321?utm_source=blogxgwz2
// #include<singal.h>
#include<bits/stdc++.h>
#include <windows.h>
#include <stdio.h>
#define CONTRL_C_HANDLE() signal(3, exit)
int main(int argc, char *argv[])
{
    printf("Set Console Ctrl Handler\n");
    CONTRL_C_HANDLE();
    while (1);
    system("PAUSE");
    return 0;
}