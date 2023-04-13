#include <iostream>
#include "linked list.h"
using namespace std;
linkedlist::linkedlist(){
    h=new node;
    h->value=NULL;
    h->occorunce=NULL;
    h->next=NULL;
}
void linkedlist::Add(int added,int place,int o){
    node *n;
    n=new node;
    if(h==NULL && place!=-1 && place!=-2)
        return;
    if(place==-1){
        n->value=added;n->occorunce=o;
        n->next=h->next;
        h->next=n;
        return;
    }
    if(place==-2){
        node *p;
        p=new node;
        p=h;
        while(p->next!=NULL){
            p=p->next;
        }
        n->value=added;n->occorunce=o;
        p->next=n;
        n->next=NULL;
        return;
    }
    node *p;
    p=new node;
    p=h;
    while(p->value!=place && p->next!=NULL){
        p=p->next;
    }
    if(p->next!=NULL && p->value==place){
        n->value=added;n->occorunce=o;
        n->next=p->next;
        p->next=n;
    }
}
void linkedlist::Delete(int place){
    node *n;
    n=new node;
    node *p;
    p=new node;
    p=h;
    if(h->next!=NULL){
        if(place==-1){
            h=h->next;
            delete p;
            return;
        }
        if(place==-2){
            n=h->next;
            while(n->next!=NULL){
                p=p->next;
                n=n->next;
            }
            p->next=NULL;
            delete n;
            return;
        }
        n=h->next;
        while(n->value!=place && n->next!=NULL){
            p=p->next;
            n=n->next;
        }
        if(n->value==place && n->next!=NULL){
            p->next=n->next;
            delete n;
        }
    }
    else
        if(place==h->value || place==-1 || place==-2){
            h->value=NULL;
            h->occorunce=NULL;
            h->next=NULL;
            delete p;
            return;
        }
            
}
void linkedlist::Print(){
    node *n;
    n=new node;
    n=h;
    while(n->next!=NULL){
        n=n->next;
        cout<<n->value<<" "<<n->occorunce<<endl;
    }
}
linkedlist linkedlist::vectorb(vector<int> v){
    int t;
    for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.size();j++)
            if(v[i]>=v[j]){
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
    linkedlist l;
    int o=1;
    int n=-1;
    for (int i=0; i<v.size(); i++){
        if(n!=v[i]){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j])
                    o++;
            }
            l.Add(v[i],-2,o);
            o=1;
            n=v[i];
        }
    }
    return l;
}
int linkedlist::sum(){
    node *n;
    n=new node;
    n=h;
    int total=0;
    while(n->next!=NULL){
        total=total+n->value;
        n=n->next;
    }
    total=total+n->value;
    return total;
}
