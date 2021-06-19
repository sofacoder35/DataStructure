//
// Created by zsf on 2021/6/17.
//
#include "stdio.h"
#define MaxSize 10
struct SeqList{
    int data[MaxSize];
    int len=0;
};
bool ListInsert(SeqList &L,int i,int e){//第i个插e
    if(i<1 || i>L.len+1)
        return false;
    if(L.len > MaxSize)
        return false;
    for (int j = L.len; j >=i ; --j) {
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.len++;
    return true;

}
bool ListDelete(SeqList &L,int i,int &e){//删除第i个元素，返回e
    if(i<1 || i>L.len)
        return false;
    e=L.data[i-1];
    for (int j = i; j < L.len; ++j) {
       L.data[j-1]=L.data[j];
    }
    L.len--;
    return true;
}
int ListFind(SeqList &L,int e){//查找元素
    for (int i = 0; i < L.len; ++i) {
        if(L.data[i]==e)
            return i+1;
    }
}
int main(){
    SeqList L;
    ListInsert(L,1,52);
    ListInsert(L,1,25);
    int e=-1;
//    if(ListDelete(L,1,e)){
//        printf("%d",e);
//    }
//    else{
//        printf("false");
//    }
    printf("%d",ListFind(L,52));
    return 0;
}
