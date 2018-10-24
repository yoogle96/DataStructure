#include "Deque.hpp"

#include <iostream>
using namespace std;

void DequeInit(Deque * pdeq){
    pdeq -> head = NULL;
    pdeq -> tail = NULL;
}

int DQIsEmpty(Deque * pdeq){
    if(pdeq -> head == NULL)
        return TRUE;
    else
        return FALSE;
}

void DQAddFirst(Deque * pdeq, Data data){
    Node * newNode = new Node;
    newNode -> next = pdeq -> head;
    newNode -> prev = NULL;
    newNode -> data = data;
    
    if(DQIsEmpty(pdeq))
        pdeq -> tail = newNode;
    else
        pdeq -> head -> prev = newNode;
    
    pdeq -> head = newNode;
}

void DQAddLast(Deque * pdeq, Data data){
    Node * newNode = new Node;
    newNode -> next = NULL;
    newNode -> data = data;
    newNode -> prev = pdeq -> tail;
    
    if(DQIsEmpty(pdeq))
        pdeq -> head = newNode;
    else
        pdeq -> tail -> next = newNode;
    
    pdeq -> tail = newNode;
}

Data DQRemoveFirst(Deque * pdeq){
    Node * delNode = pdeq -> head;
    int rData = pdeq -> head -> data;
    pdeq -> head = pdeq -> head -> next;
    
    delete delNode;
    
    if(pdeq -> head == NULL)
        pdeq -> tail = NULL;
    else
    pdeq -> head -> prev = NULL;
    
    return rData;
}

Data DQRemoveLast(Deque * pdeq){
    Node * delNode = pdeq -> tail;
    int rData = pdeq -> tail -> data;
    pdeq -> tail = pdeq -> tail -> prev;
    
    delete delNode;
    
    if(pdeq -> tail == NULL)
        pdeq -> head = NULL;
    else
    pdeq -> tail -> next = NULL;
    
    return rData;
}

Data DQGetFirst(Deque * pdeq){
    if(DQIsEmpty(pdeq)){
        cout << "Is Empty !! " << endl;
        exit(-1);
    }
    return pdeq -> head -> data;
}

Data DQGetLast(Deque * pdeq){
    if(DQIsEmpty(pdeq)){
        cout << "Is Empty !! " << endl;
        exit(-1);
    }
    
    return pdeq -> tail -> data;
}
