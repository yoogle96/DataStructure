#include <iostream>
#include "CLinkedList.h"

void ListInit(List * plist){
    plist -> tail = NULL;
    plist -> curr = NULL;
    plist -> before = NULL;
    plist -> numOfData = 0;
}

void LInsert(List * plist, Data data){
    Node * newNode = new Node;
    newNode -> data = data;
    
    if(plist -> tail == NULL){
        plist -> tail = newNode;
        newNode -> next = newNode;
    }
    else{
        newNode -> next = plist -> tail -> next;
        plist -> tail -> next = newNode;
        plist -> tail = newNode;
    }
    plist -> numOfData++;
}

void LInsertFront(List * plist, Data data){
    Node * newNode = new Node;
    newNode -> data = data;
    
    if(plist -> tail == NULL){
        plist -> tail = newNode;
        newNode -> next = newNode;
    }
    else{
        newNode -> next = plist -> tail -> next;
        plist -> tail -> next = newNode;
    }
    plist -> numOfData++;
}

int LFirst(List * plist, Data * pdata){
    if(plist -> tail == NULL){
        return FALSE;
    }
    else{
        plist ->before = plist -> tail;
        plist -> curr = plist -> tail -> next;
        
        *pdata = plist -> curr -> data;
        return TRUE;
    }
}

int LNext(List * plist, Data * pdata){
    if(plist -> curr -> next == NULL){
        return FALSE;
    }
    plist -> before = plist -> curr;
    plist -> curr = plist -> curr -> next;
    
    *pdata = plist -> curr -> data;
    return TRUE;
}

Data LRemove(List * plist){
    Node * rpos = plist -> curr;
    Data rdata = rpos -> data;
    
    if(rpos == plist -> tail){
        if(plist -> tail == plist -> tail -> next){
            plist -> tail = NULL;
        }
        else{
            plist -> tail = plist -> before;
        }
    }
    plist -> before -> next = plist -> curr -> next;
    plist -> curr = plist -> before;
    
    delete rpos;
    plist -> numOfData--;
    return rdata;
}

int LCount(List * plist){
    return plist -> numOfData;
}
