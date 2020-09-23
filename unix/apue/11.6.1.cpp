#include <stdlib.h>
#include <pthread.h>
struct foo{
    int f_cnt;
    pthread_mutex_t f_lock;
    int f_id;
    // 更多内容
};

foo * foo_alloc(int id){
    struct foo *fp;
    if((fp=(foo*)malloc(sizeof(foo)))!=NULL){ // gcc if((fp=malloc(sizeof(struct foo)))!=NULL){
        fp->f_cnt=1;
        fp->f_id=id;
        if(pthread_mutex_init(&fp->f_lock,NULL)!=0){
            free(fp);
            return fp;
        }
        // 其他操作
    }
    return fp;
}

void foo_hold(foo *fp){
    pthread_mutex_lock(&fp->f_lock); // 别忘了 '&'
    // pthread_mutex_lock(&fp->f_lock); // 加两遍 陷入死锁
    fp->f_cnt++;
    pthread_mutex_unlock(&fp->f_lock);
}

void foo_release(foo *fp){
    pthread_mutex_lock(&fp->f_lock);
    if(--fp->f_cnt==0){
        pthread_mutex_unlock(&fp->f_lock);
        pthread_mutex_destroy(&fp->f_lock); // 动态分配的锁需要 pthread_mutex_destroy 11.6.1
        free(fp);
    }
    else{
        pthread_mutex_unlock(&fp->f_lock);
    }
}

int main(){
    foo *lock=foo_alloc(1);
    foo_hold(lock);
    return 0;
}