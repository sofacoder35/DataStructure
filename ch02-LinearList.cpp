//
// Created by zsf on 2021/6/17.
//
#include "stdio.h"
#include "stdlib.h"
#define InitSize 10
struct SeqList{
    int *data;
    int MaxSize;//最大容量
    int length;//当前长度
};
void InitList(SeqList &L){
    L.data=(int *)malloc( InitSize * sizeof(int));
    L.length=0;
    L.MaxSize=InitSize;
}
void IncreaseList(SeqList & L,int len){
    int *p=L.data;
    L.data=(int *)malloc((L.MaxSize+len)* sizeof(int));
    for (int i = 0; i < L.length; ++i) {
        L.data[i]=p[i];
    }
    L.MaxSize+=len;
    free(p);
}
int main(){
    SeqList L;
    InitList(L);
    IncreaseList(L,5);
    L.data[12]=3;
    //printf("%d", L.data[12]);
    return 0;
}
