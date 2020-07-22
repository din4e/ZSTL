#include<stdlib.h> // exit() _Exit()
#include<unistd.h> // _exit()
#include<iostream>
// Chapter 7 进程环境
void func(){
    // std::cout<<"Haaaa\n";
    printf("Haaa\n"); 
    // 进程正常终止：1.2.3.4.5.
    // 进程异常终止：6.abort();7.接受一个信号;8.最后一个线程对取消请求做出响应。
    // 没有考虑针对现成的终止方法
    exit(0);
    // stdlib.h ISO C 
    // atexit(); // https://man7.org/linux/man-pages/man3/atexit.3.html
    //我们可以看到atexit函数的调用顺序是和登记顺序相反的。
    //可以按照你予设的顺序摧毁全局变量（类），
    //例如有个log类，你在其它的全局类里也有可能调用到Log类写日志。
    //所以log 类必须最后被析构 。假如没有规定析构顺序，那么程序在退出时将有可能首先析构log类，
    //那么其它的全局类在此时将无法正确写日志。 
    //把数据写回文件, 删除临时文件, 这才是真正有用的.

    // 先调用各终止处理程序，然后关闭fclose所有的流。
    // 程序调用exec函数族中的任一函数，清除所有已安装的终止处理程序。

    _Exit(0); // stdlib.h ISO C
    _exit(0); // unistd.h POSIX.1
}

// bash: g++ b1c7.cpp && .\a test foo

int main(int argc,char *argv[]){
    // 7.3 func();

    // 7.4 命令行参数
    for(int i=0;argv[i]!=NULL;++i){ // 
        printf("argv[%d]:%s\n",i,argv[i]);
    }
    // 7.5 环境表
    // int main(int argc,char *argv[], char *envp[])


}
