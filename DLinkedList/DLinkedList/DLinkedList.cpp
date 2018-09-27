#include "DLinkedList.hpp"

void ListInit(List * plist){
    plist -> head = new Node;
    plist -> head -> next = NULL;
    plist -> comp = NULL;
    plist -> numOfData = 0;
}

void FInsert(List * plist, LData data){
    Node * newNode = new Node;
    newNode -> data = data;
    newNode -> next = plist -> head -> next;
    plist -> head -> next = newNode;
    
    (plist -> numOfData)++;
}

void SInsert(List * plist, LData data){
    Node * newNode = new Node;
    Node * pred = plist -> head;
    newNode -> data = data;
    
    while(pred -> next != NULL && plist ->comp(data, pred -> next -> data) != 0){
        pred = pred -> next;
    }
    
    newNode -> next = pred -> next;
    pred -> next = newNode;
    
    (plist -> numOfData)++;
}

void LInsert(List * plist, LData data){
    if(plist -> comp == NULL){
        FInsert(plist, data);
    }
    else{
        SInsert(plist, data);
    }
}

int LFirst(List * plist, LData * pdata){
    if(plist -> head -> next == NULL){
        return FALSE;
    }
    else{
        plist -> curr = plist -> head -> next;
        plist -> before = plist -> head;
        *pdata = plist -> curr -> data;
        
        return TRUE;
    }
}

int LNext(List * plist, LData * pdata){
    if(plist -> curr ->next == NULL ){
        return FALSE;
    }
    else{
        plist -> before = plist -> curr;
        plist -> curr = plist -> curr -> next;
        *pdata = plist -> curr -> data;
        
        return TRUE;
    }
}

LData LRemove(List * plist){
    Node * rpos = plist -> curr;
    LData data = rpos -> data;
    plist -> before -> next = rpos -> next;
    plist -> curr = plist -> before;
    
    plist -> numOfData--;
    delete rpos;
    return data;
}

int LCount(List * plist){
    return plist -> numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)){
    plist -> comp = comp;
}
