#include "DBLinkedList.hpp"

void ListInit(List * plist){
    plist -> head = NULL;
//    plist -> cur = NULL;
    plist -> numOfData = 0;
}

void LInsert(List * plist, Data data){
    Node * newNode = new Node;
    newNode -> data = data;
    
    newNode -> next = plist -> head;
    if(plist -> head != NULL)
        plist -> head -> prev = newNode;
    
    newNode -> prev = NULL;
    plist -> head = newNode;
    
    plist -> numOfData++;
}

int LFirst(List * plist, Data * pdata){
    if(plist -> head == NULL)
        return FALSE;
    
    plist -> cur = plist -> head;
    *pdata = plist -> cur -> data;
    return TRUE;
}

int LNext(List * plist, Data * pdata){
    if(plist -> cur -> next == NULL)
        return FALSE;
    
    plist -> cur = plist -> cur -> next;
    *pdata = plist -> cur -> data;
    return TRUE;
}

int LPrevious(List * plist, Data * pdata){
    if(plist -> cur == NULL)
        return FALSE;
    *pdata = plist -> cur -> data;
    plist -> cur = plist -> cur -> prev;
    return TRUE;
}
int LCount(List * plist){
    return plist -> numOfData;
}
