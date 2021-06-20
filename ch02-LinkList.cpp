//
// Created by zsf on 2021/6/20.
//
#include "iostream"
using namespace std;
typedef struct LNode{
    int data;
    LNode *next;
}LNode,*LinkList;
bool InitList(LinkList &L){
    L=(LNode *)malloc(sizeof(LNode));
    if(L==NULL)
        return false;
    L->next=NULL;
    return true;
}
LinkList List_HeadInsert(LinkList &L){//头插法
    int e;
    scanf("%d",&e);
    while (e!=-1){
        LNode *s=new LNode;
        s->data=e;
        s->next=NULL;
        s->next=L->next;
        L->next=s;
        scanf("%d",&e);
    }
    return L;
}
LinkList List_TailInsert(LinkList &L){//尾插法
    int e;
    LNode *r=L;
    scanf("%d",&e);
    while (e!=-1){
        LNode *s=new LNode;
        s->data=e;
        s->next=NULL;
        r->next=s;
        r=s;
        scanf("%d",&e);
    }
    return L;
}
void print(LinkList &L){
    L=L->next;
    while (L!=NULL){
        printf("%d ",L->data);
        L=L->next;
    }
}
int main(){
    LinkList L;
    InitList(L);
    //List_HeadInsert(L);
    //List_TailInsert(L);
    print(L);
    return 0;
}

