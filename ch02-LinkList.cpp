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
    //L=(LNode *)malloc(sizeof(LNode));
    L=new LNode;
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
LNode *GetElem(LinkList &L,int i){//按位查找
    if(i<0)return NULL;
    LNode *p=L->next;
    if(i==0)return p;
    int j=1;
    while (p && j<i){
        p=p->next;
        j++;
    }
    return p;

}
LNode *LocateElem(LinkList &L,int e){//按值查找
    LNode *p=L->next;
    while (p && p->data!=e){
        p=p->next;
    }
    return p;
}
int Length(LinkList &L){
    LNode *p=L;
    int len=0;
    while (p->next){
        len++;
        p=p->next;
    }
    return len;
}
void print(LinkList &L){
    LNode *p=L->next;
    while (p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
    LinkList L;
    InitList(L);
    //List_HeadInsert(L);
    List_TailInsert(L);
    print(L);
//    if(GetElem(L,2)){
//        printf("%d ",GetElem(L,2)->data);
//    }
//    if(LocateElem(L,2)){
//        printf("%d ",LocateElem(L,2)->data);
//    }
    printf("%d",Length(L));


    return 0;
}

